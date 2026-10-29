void __fastcall sub_F0DAE0(const char **a1, __int64 a2, double a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // r14
  __int64 *v9; // rbx
  __int64 v10; // rax
  __int64 *v11; // r12
  __int64 v12; // r15
  const char *v13; // rdi
  _BYTE *v14; // rax

  v7 = (__int64)(a1 + 3);
  v9 = (__int64 *)(a2 + 16);
  v10 = *(_DWORD *)a2 >> 9;
  v11 = (__int64 *)(a2 + 16 + v10 * 8);
  if ( &v9[v10] != v9 )
  {
    while ( 1 )
    {
      v12 = *v9;
      sub_B1F2A0(*v9, *a1, v7);
      if ( *(v11 - 1) == v12 )
        goto LABEL_4;
      v13 = *a1;
      v14 = *((_BYTE **)*a1 + 4);
      if ( (unsigned __int64)v14 < *((_QWORD *)*a1 + 3) )
      {
        *((_QWORD *)v13 + 4) = v14 + 1;
        *v14 = 32;
LABEL_4:
        if ( v11 == ++v9 )
          break;
      }
      else
      {
        ++v9;
        sub_227BA10(v13, 32);
        if ( v11 == v9 )
          break;
      }
    }
  }
  sub_F0C470((__int64)a1, *(char **)(a2 + 8), 0, a5, a6, a7, a3);
}
