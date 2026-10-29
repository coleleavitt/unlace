__int64 __fastcall sub_21FAB90(__int64 *a1, char a2)
{
  __int64 v3; // rdx
  unsigned int v4; // edx
  __int64 *v5; // rdi
  __int64 v6; // rdx
  __int64 *v7; // rdi
  __int64 v8; // rax
  int v9; // edx
  int v10; // eax

  v3 = *a1;
  *((_BYTE *)a1 + 20) = *((_BYTE *)a1 + 20) & 0xF8 | 2;
  v4 = *(_DWORD *)(v3 + 8) + 64;
  if ( v4 > 0x7F )
  {
    v6 = v4 >> 6;
    v5 = (__int64 *)a1[1];
  }
  else
  {
    v5 = a1 + 1;
    v6 = 1;
  }
  sub_22096E0(v5, 0, v6);
  v7 = a1 + 1;
  v8 = *a1;
  *((_BYTE *)a1 + 20) = (8 * (a2 & 1)) | *((_BYTE *)a1 + 20) & 0xF7;
  v9 = *(_DWORD *)(v8 + 4);
  v10 = *(_DWORD *)(v8 + 8);
  *((_DWORD *)a1 + 4) = v9;
  if ( (unsigned int)(v10 + 64) > 0x7F )
    v7 = (__int64 *)a1[1];
  return sub_2209800(v7, (unsigned int)(v10 - 1));
}
