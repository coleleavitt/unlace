__int64 __fastcall sub_7A3300(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rdi
  unsigned __int64 v4; // rax
  _DWORD *v5; // rdi
  __int64 result; // rax
  _QWORD *v7; // rdi
  __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // edx

  v1 = *(_QWORD *)(a1 + 104);
  v3 = *(_QWORD *)(v1 + 96);
  v4 = v3 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v3 & 1) != 0 )
  {
    if ( v4 )
    {
LABEL_3:
      if ( (v4 & 4) != 0 )
      {
        v5 = (_DWORD *)(v3 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v5 )
        {
          v10 = *(_QWORD *)v5;
          v11 = *(_DWORD *)(*(_QWORD *)v5 + 12LL);
          if ( v5[2] != v11 )
          {
            v5[2] = v11;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 144LL))(v10, v1);
          }
        }
      }
    }
LABEL_5:
    result = *(_QWORD *)(a1 + 128);
    *(_BYTE *)(result + 1) |= 8u;
    return result;
  }
  if ( v4 <= 3 || (v3 & 2) == 0 )
    goto LABEL_5;
  v7 = (_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
  v8 = v7[2275];
  if ( v8 )
  {
    v9 = v7[274];
    v7[284] += 24LL;
    v4 = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v7[275] >= v4 + 24 && v9 )
      v7[274] = v4 + 24;
    else
      v4 = sub_7A1DE0((__int64)(v7 + 274), 24, 3);
    *(_QWORD *)v4 = v8;
    *(_DWORD *)(v4 + 8) = 0;
    v3 = v4 | 5;
    *(_QWORD *)(v4 + 16) = v1;
    *(_QWORD *)(v1 + 96) = v4 | 5;
    LOBYTE(v4) = v4 & 0xFA | 4;
    goto LABEL_3;
  }
  *(_QWORD *)(v1 + 96) = v1 & 0xFFFFFFFFFFFFFFFALL | 1;
  result = *(_QWORD *)(a1 + 128);
  *(_BYTE *)(result + 1) |= 8u;
  return result;
}

