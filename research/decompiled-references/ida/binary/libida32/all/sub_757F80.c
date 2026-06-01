unsigned __int64 __fastcall sub_757F80(__int64 a1, const char **a2)
{
  const char *v2; // rbp
  char v3; // r14
  const char *v6; // rbx
  char v7; // al
  void *v8; // rdi
  const char *v9; // rsi
  char v10; // dl
  unsigned __int64 result; // rax
  char v12; // dl
  __int64 v13; // rax
  unsigned int v14; // [rsp+1Bh] [rbp-5Dh]
  void *v15; // [rsp+20h] [rbp-58h] BYREF
  __int128 v16; // [rsp+28h] [rbp-50h]
  unsigned __int64 v17; // [rsp+38h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v2 = *a2;
  if ( *a2 )
  {
    v3 = *v2;
    if ( *v2 )
    {
      v6 = &v2[strlen(*a2) - 1];
      if ( v2 < v6 )
      {
        while ( 1 )
        {
          v7 = *v6;
          if ( *v6 != 47 )
          {
            if ( v2 >= v6 )
              goto LABEL_23;
            while ( v7 != 47 )
            {
              if ( v2 == v6 - 1 )
                goto LABEL_22;
              v7 = *--v6;
            }
            goto LABEL_13;
          }
          if ( v2 == v6 - 1 )
            break;
          --v6;
        }
LABEL_22:
        if ( *(v6 - 1) != 47 )
          goto LABEL_23;
        v6 = v2;
        result = 0;
LABEL_37:
        v2 = v6 + 1;
        if ( v6[1] != 46 )
          goto LABEL_24;
        goto LABEL_25;
      }
      if ( *v6 != 47 )
      {
LABEL_23:
        result = *(unsigned int *)(a1 + 96);
        if ( v3 != 46 )
        {
LABEL_24:
          *a2 = v2;
          return result;
        }
LABEL_25:
        v12 = v2[1];
        if ( v12 )
        {
          if ( v12 != 46 || v2[2] )
            goto LABEL_24;
          v2 = haystack;
          v13 = *(_QWORD *)(a1 + 48) + 176LL * *(unsigned int *)(*(_QWORD *)(a1 + 48) + 176 * result + 160);
          if ( !*(_QWORD *)(v13 + 8) )
            goto LABEL_28;
        }
        else
        {
          v2 = haystack;
          v13 = *(_QWORD *)(a1 + 48) + 176 * result;
          if ( !*(_QWORD *)(v13 + 8) )
          {
LABEL_28:
            result = *(unsigned int *)(v13 + 160);
            goto LABEL_24;
          }
        }
        v2 = *(const char **)v13;
        goto LABEL_28;
      }
LABEL_13:
      if ( v2 == v6 )
      {
        result = 0;
        goto LABEL_37;
      }
      v8 = nullptr;
      v15 = nullptr;
      v16 = 0;
      if ( v6 - v2 != -1 )
      {
        v15 = (void *)qvector_reserve(&v15, 0, v6 - v2 + 1, 1);
        v8 = v15;
      }
      *(_QWORD *)&v16 = v6 - v2 + 1;
      memmove(v8, v2, v6 - v2);
      v9 = haystack;
      *((_BYTE *)v15 + v6 - v2) = 0;
      if ( (_QWORD)v16 )
        v9 = (const char *)v15;
      result = sub_757CF0(a1, v9);
      v14 = result;
      v10 = BYTE4(result);
      result = (unsigned int)result;
      if ( v10 == 1 && (_DWORD)result != -1 )
      {
        if ( v15 )
        {
          *(_QWORD *)&v16 = 0;
          qfree(v15);
          result = v14;
        }
        goto LABEL_37;
      }
      if ( v15 )
      {
        *(_QWORD *)&v16 = 0;
        qfree(v15);
      }
    }
  }
  return 0xFFFFFFFFLL;
}

