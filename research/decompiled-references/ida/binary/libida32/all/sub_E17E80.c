_QWORD *__fastcall sub_E17E80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  int v8; // r12d
  _QWORD *result; // rax
  _QWORD *v10; // rax
  __int64 v11; // rax
  __int64 v12[4]; // [rsp+8h] [rbp-20h] BYREF

  v6 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v7 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v7 & 8) != 0 )
  {
    a4 = a2 & 7;
    if ( a2 & 7
       | *((_BYTE *)&qword_18 + (*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL)) & 7
       | byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 7u
      || (*(_DWORD *)((_BYTE *)&qword_18 + (*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
        & 0xFFFFFE00) != 0
      || (*((_BYTE *)&qword_18 + (*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL)) & 8) != 0 )
    {
      goto LABEL_3;
    }
  }
  else if ( (((unsigned __int8)a2 | (unsigned __int8)v7) & 7) != 0 )
  {
    goto LABEL_3;
  }
  v10 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*v10 + 16LL) == 48 )
  {
    v11 = sub_F3D1D0(*v10, a2, v6, a4, a5);
    v12[0] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 32LL))(v11);
    goto LABEL_4;
  }
LABEL_3:
  v12[0] = a2;
LABEL_4:
  v8 = *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 40) = v8 + 1;
  result = sub_E177B0(a1 + 232, v12, v6, a4, a5, a6);
  *(_DWORD *)result = v8;
  return result;
}

