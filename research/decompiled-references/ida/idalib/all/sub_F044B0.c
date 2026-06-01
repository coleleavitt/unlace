__int64 __fastcall sub_F044B0(_QWORD *a1, char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // rdi
  __int16 v14; // dx
  char *v15; // r8
  char *v16; // rsi
  __int64 v17; // rdx

  v7 = a2;
  v8 = *((_QWORD *)a2 + 5);
  if ( v8 )
  {
    a2 = (char *)*a1;
    sub_E90250(v8, *a1, (const __m128i *)(a1 + 3), 0, 1);
  }
  if ( (*(_QWORD *)v7 & 0x80000LL) == 0 )
    goto LABEL_8;
  v9 = *a1;
  v10 = 8LL * *((unsigned int *)v7 + 1);
  a4 = (__int64)&v7[v10 + 64];
  a3 = (__int64)&v7[v10 + 80];
  v11 = a4;
  if ( (*(_WORD *)v7 & 0x1FF) != 0x18 )
    v11 = a3;
  if ( *(_DWORD *)(v11 + 8) )
  {
    a2 = "template ";
    sub_995540(v9, "template ");
LABEL_8:
    v9 = *a1;
  }
  result = sub_B86AA0(v9, (__int64)a2, a3, a4, a5, a6, *((_QWORD *)v7 + 2));
  v13 = *(_QWORD *)v7;
  if ( (*(_QWORD *)v7 & 0x80000) != 0 )
  {
    v14 = *(_WORD *)v7 & 0x1FF;
    result = 8LL * *((unsigned int *)v7 + 1);
    v15 = &v7[result + 80];
    if ( v14 == 24 )
      v15 = &v7[result + 64];
    if ( *(_DWORD *)v15 )
    {
      if ( (v13 & 0x80000) != 0 )
      {
        if ( v14 == 24 )
        {
          if ( *(_DWORD *)&v7[result + 64] )
          {
            v16 = &v7[16 * ((v13 & 0x80000) != 0) + 64 + result];
LABEL_17:
            v17 = 0;
            if ( (v13 & 0x80000) != 0 )
              v17 = *((unsigned int *)v15 + 3);
            return sub_F79380(*a1, v16, v17, a1 + 3, 0);
          }
        }
        else if ( *(_DWORD *)&v7[result + 80] )
        {
          v16 = &v7[16 * ((v13 & 0x80000) != 0) + 80 + result];
          goto LABEL_17;
        }
      }
      v16 = nullptr;
      goto LABEL_17;
    }
  }
  return result;
}
