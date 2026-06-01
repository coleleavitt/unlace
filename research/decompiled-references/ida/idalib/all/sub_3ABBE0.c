unsigned __int64 __fastcall sub_3ABBE0(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rax
  int v3; // r12d
  __int64 v5; // rsi
  size_t v6; // rax
  size_t v7; // rax
  __int64 v9; // rax
  _BYTE v10[5]; // [rsp+Eh] [rbp-2Ah] BYREF
  _BYTE v11[5]; // [rsp+13h] [rbp-25h] BYREF
  _QWORD v12[4]; // [rsp+18h] [rbp-20h] BYREF

  v2 = a1[1];
  v3 = *((_DWORD *)a2 + 3);
  v12[0] = __readfsqword(0x28u);
  v5 = *a1;
  if ( a1[2] < (unsigned __int64)(v2 + 1) )
  {
    v9 = qvector_reserve(a1, v5, v2 + 1, 1);
    *a1 = v9;
    v5 = v9;
    v2 = a1[1];
  }
  *(_BYTE *)(v5 + v2) = v3;
  ++a1[1];
  if ( !*((_DWORD *)a2 + 3) )
  {
    v7 = pack_dq(v10, v12, *a2) - (_QWORD)v10;
    if ( !v7 )
      return v12[0] - __readfsqword(0x28u);
    goto LABEL_7;
  }
  v6 = pack_dd(v10, v11, *((unsigned int *)a2 + 2)) - (_QWORD)v10;
  if ( v6 )
    sub_3AA770(a1, v10, v6);
  v7 = pack_dq(v10, v12, *a2) - (_QWORD)v10;
  if ( v7 )
LABEL_7:
    sub_3AA770(a1, v10, v7);
  return v12[0] - __readfsqword(0x28u);
}
