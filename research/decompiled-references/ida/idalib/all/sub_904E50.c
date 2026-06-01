__int64 __fastcall sub_904E50(__int64 a1, int a2, int a3)
{
  unsigned int v3; // r13d
  __int64 result; // rax
  signed int v6; // r12d
  unsigned int v7; // ebp
  unsigned int v8; // edx
  unsigned int *v9; // r15
  unsigned int *v10; // rax
  unsigned int v11; // r14d
  unsigned int v12; // r8d
  __int16 v13; // r11
  char v14; // r10
  char v15; // r9
  unsigned int v16; // esi
  unsigned int *j; // rdi
  unsigned int v18; // ecx
  unsigned int *v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 i; // r8
  unsigned int v26; // edi
  __int16 v27; // r11
  __int64 v28; // rax
  char v29; // r10
  char v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rsi

  v3 = a2;
  result = (unsigned int)(a3 - a2);
  if ( (int)result <= 7 )
  {
    v23 = a1 + 8LL * a2;
    if ( (int)result + 1 > 1 )
    {
      v24 = (unsigned int)(result - 1);
      for ( i = 0; ; ++i )
      {
        v26 = *(_DWORD *)(v23 + 8 * i + 8);
        v27 = *(_WORD *)(v23 + 8 * i + 12);
        v28 = i;
        v29 = *(_BYTE *)(v23 + 8 * i + 14);
        v30 = *(_BYTE *)(v23 + 8 * i + 15);
        while ( 1 )
        {
          v31 = v23 + 8LL * ((int)v28 + 1);
          if ( v26 <= *(_DWORD *)(v23 + 8 * v28) )
            break;
          v32 = *(_QWORD *)(v23 + 8 * v28--);
          *(_QWORD *)v31 = v32;
          if ( (_DWORD)v28 == -1 )
          {
            v31 = v23;
            break;
          }
        }
        *(_DWORD *)v31 = v26;
        result = i + 1;
        *(_WORD *)(v31 + 4) = v27;
        *(_BYTE *)(v31 + 6) = v29;
        *(_BYTE *)(v31 + 7) = v30;
        if ( v24 == i )
          break;
      }
    }
  }
  else
  {
    v6 = a3;
    if ( a3 > a2 )
    {
      do
      {
        v7 = v3 - 1;
        v8 = v3;
        v9 = (unsigned int *)(a1 + 8LL * v6);
        v10 = (unsigned int *)(a1 + 8LL * (int)v3);
        v11 = *v9;
        v12 = *v10;
        v13 = *((_WORD *)v10 + 2);
        v14 = *((_BYTE *)v10 + 6);
        v15 = *((_BYTE *)v10 + 7);
        v16 = *v10;
        for ( j = (unsigned int *)(a1 + 8LL * (int)(v3 + 1)); ; j += 2 )
        {
          v18 = v7 + 1;
          v19 = (unsigned int *)(a1 + 8LL * (int)(v7 + 1));
          if ( v11 < v16 )
          {
            v20 = a1 + 8LL * (int)v8;
            *(_QWORD *)v19 = *(_QWORD *)v20;
            *(_DWORD *)v20 = v12;
            *(_WORD *)(v20 + 4) = v13;
            *(_BYTE *)(v20 + 6) = v14;
            *(_BYTE *)(v20 + 7) = v15;
            LODWORD(v20) = v7 + 2;
            ++v7;
            v18 = v20;
            v19 = (unsigned int *)(a1 + 8LL * (int)v20);
            v12 = *v19;
            v13 = *((_WORD *)v19 + 2);
            v14 = *((_BYTE *)v19 + 6);
            v15 = *((_BYTE *)v19 + 7);
          }
          if ( (int)++v8 >= v6 )
            break;
          v16 = *j;
        }
        *(_QWORD *)v19 = *(_QWORD *)v9;
        *v9 = v12;
        *((_WORD *)v9 + 2) = v13;
        *((_BYTE *)v9 + 6) = v14;
        *((_BYTE *)v9 + 7) = v15;
        if ( (int)(v18 - v3) >= (int)(v6 - v18) )
        {
          v22 = (unsigned int)v6;
          v6 = v7;
          result = sub_904E50(a1, v7 + 2, v22);
        }
        else
        {
          v21 = v3;
          v3 = v7 + 2;
          result = sub_904E50(a1, v21, v7);
        }
      }
      while ( (int)v3 < v6 );
    }
  }
  return result;
}
