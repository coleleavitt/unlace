/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1A410
// Address: 0x0001A410

//----- (0001A410) --------------------------------------------------------
int __cdecl sub_1A410(int a1, int *a2)
{
  int i; // eax
  int v3; // eax
  size_t v4; // edi
  void *v5; // eax
  int v6; // eax
  const char *v7; // edx
  const char *v8; // esi
  int v9; // eax
  size_t v10; // edi
  int v11; // ecx
  void *v12; // eax
  FILE *v13; // esi
  int v14; // eax
  int v15; // edi
  int v17; // edi
  int v18; // ecx
  size_t v19; // esi
  _BYTE *v20; // eax
  unsigned int v21; // edi
  unsigned int v22; // edx
  size_t v23; // edx
  _BYTE *v24; // eax
  unsigned int v25; // esi
  unsigned int v26; // edi
  size_t v27; // esi
  size_t v28; // edi
  _BYTE *v29; // eax
  unsigned int v30; // esi
  unsigned int v31; // edx
  size_t v32; // edx
  _BYTE *v33; // eax
  unsigned int v34; // esi
  unsigned int v35; // edi
  int v36; // esi
  const char *v38; // [esp+0h] [ebp-548Ch]
  size_t v39; // [esp+0h] [ebp-548Ch]
  size_t v40; // [esp+4h] [ebp-5488h]
  int v41; // [esp+8h] [ebp-5484h]
  __pid_t v42; // [esp+Ch] [ebp-5480h]
  int v43; // [esp+14h] [ebp-5478h]
  int v44; // [esp+18h] [ebp-5474h] BYREF
  int v45; // [esp+1Ch] [ebp-5470h] BYREF
  size_t v46; // [esp+20h] [ebp-546Ch]
  unsigned int v47; // [esp+24h] [ebp-5468h]
  int v48; // [esp+28h] [ebp-5464h]
  int v49; // [esp+2Ch] [ebp-5460h] BYREF
  unsigned int v50; // [esp+30h] [ebp-545Ch]
  unsigned int v51; // [esp+34h] [ebp-5458h]
  int v52; // [esp+38h] [ebp-5454h] BYREF
  int v53; // [esp+3Ch] [ebp-5450h]
  int v54; // [esp+40h] [ebp-544Ch]
  _BYTE src[1024]; // [esp+48h] [ebp-5444h] BYREF
  int v56; // [esp+448h] [ebp-5044h] BYREF
  char nptr[8216]; // [esp+44Ch] [ebp-5040h] BYREF
  int v58; // [esp+2464h] [ebp-3028h]
  int v59; // [esp+246Ch] [ebp-3020h]
  char s[4096]; // [esp+4478h] [ebp-1014h] BYREF
  unsigned int v61; // [esp+5478h] [ebp-14h]

  v61 = __readgsdword(0x14u);
  v42 = getpid();
  if ( *a2 )
  {
    sub_1C180(a2, 0);
    qfree((void *)*a2);
    *a2 = 0;
    a2[2] = 0;
  }
  v58 = 0;
  v59 = 0;
  for ( i = qfindfirst((int)"/proc/*", (int)&v56, 0x4000); !i; i = qfindnext(&v56) )
  {
    if ( nptr[0] >= 0 && (unsigned int)(unsigned __int8)nptr[0] - 48 <= 9 )
    {
      v45 = 0;
      v46 = 0;
      v47 = 0;
      v49 = 0;
      v50 = 0;
      v51 = 0;
      v3 = atoi(nptr);
      v44 = v3;
      if ( v3 != v42 )
      {
        if ( (*(unsigned __int8 (__cdecl **)(int, int, _BYTE *, int))(*(_DWORD *)a1 + 312))(a1, v3, src, 1024) )
        {
          v4 = __strlen_chk(src, 1024);
          if ( v4 )
          {
            v5 = (void *)v45;
            if ( v47 < v4 + 1 )
            {
              v5 = qvector_reserve((int)&v45, (void *)v45, v4 + 1, 1u);
              v45 = (int)v5;
            }
            v46 = v4 + 1;
            memmove(v5, src, v4);
            *(_BYTE *)(v45 + v4) = 0;
          }
          else
          {
            v46 = 0;
          }
          v6 = (*(int (__cdecl **)(int, int))(*(_DWORD *)a1 + 316))(a1, v44);
          v48 = v6;
          v7 = "[x]";
          if ( v6 == 4 )
            v7 = "[32]";
          v8 = "[64]";
          if ( v6 != 8 )
            v8 = v7;
          v9 = __strlen_chk(v8, 5);
          v10 = v9;
          if ( v9 )
          {
            v11 = v9 + 1;
            v12 = (void *)v49;
            if ( v51 < v10 + 1 )
            {
              v12 = qvector_reserve((int)&v49, (void *)v49, v10 + 1, 1u);
              v49 = (int)v12;
              v11 = v10 + 1;
            }
            v50 = v11;
            memmove(v12, v8, v10);
            *(_BYTE *)(v49 + v10) = 0;
          }
          else
          {
            v50 = 0;
          }
          qsnprintf(s, 4096, "/proc/%u/cmdline", v44);
          v13 = qfopen(s, (int)"r");
          if ( v13 && (v14 = qfread(v13, s, 4096), (v15 = v14) != 0) )
          {
            s[v14] = 0;
            qfclose(v13);
            if ( v15 >= 0 )
            {
              do
              {
                if ( s[v15] )
                  break;
              }
              while ( v15-- > 0 );
            }
            v17 = v15 + 1;
            if ( v17 > 0 )
            {
              v18 = 0;
              v43 = v17;
              do
              {
                v41 = v18;
                v38 = &s[v18];
                sub_1B530((int)&v52, &s[v18]);
                quote_cmdline_arg((int)&v52);
                v19 = __strlen_chk(" ", 2);
                v20 = (_BYTE *)v49;
                v21 = v50 - 1;
                if ( !v50 )
                  v21 = 0;
                v22 = v21 + v19 + 1;
                if ( v51 < v22 )
                {
                  v20 = qvector_reserve((int)&v49, (void *)v49, v21 + v19 + 1, 1u);
                  v49 = (int)v20;
                  v22 = v21 + v19 + 1;
                }
                v50 = v22;
                v20[v21 + v19] = 0;
                memmove((void *)(v49 + v21), " ", v19);
                if ( v53 )
                {
                  v23 = v53 - 1;
                  if ( v53 != 1 )
                  {
                    v24 = (_BYTE *)v49;
                    v25 = v50 - 1;
                    if ( !v50 )
                      v25 = 0;
                    v26 = v25 + v53;
                    if ( v51 < v25 + v53 )
                    {
                      v40 = v53 - 1;
                      v24 = qvector_reserve((int)&v49, (void *)v49, v26, 1u);
                      v49 = (int)v24;
                      v23 = v40;
                    }
                    v50 = v26;
                    v24[v25 + v23] = 0;
                    memcpy((void *)(v49 + v25), (const void *)v52, v23);
                  }
                }
                v27 = strlen(v38);
                if ( v52 )
                {
                  v53 = 0;
                  qfree((void *)v52);
                  v52 = 0;
                  v54 = 0;
                }
                v18 = v41 + v27 + 1;
              }
              while ( v18 < v43 );
            }
          }
          else
          {
            v28 = __strlen_chk(" ", 2);
            v29 = (_BYTE *)v49;
            v30 = v50 - 1;
            if ( !v50 )
              v30 = 0;
            v31 = v30 + v28 + 1;
            if ( v51 < v31 )
            {
              v29 = qvector_reserve((int)&v49, (void *)v49, v30 + v28 + 1, 1u);
              v49 = (int)v29;
              v31 = v30 + v28 + 1;
            }
            v50 = v31;
            v29[v30 + v28] = 0;
            memmove((void *)(v49 + v30), " ", v28);
            if ( v46 )
            {
              v32 = v46 - 1;
              if ( v46 != 1 )
              {
                v33 = (_BYTE *)v49;
                v34 = v50 - 1;
                if ( !v50 )
                  v34 = 0;
                v35 = v34 + v46;
                if ( v51 < v34 + v46 )
                {
                  v39 = v46 - 1;
                  v33 = qvector_reserve((int)&v49, (void *)v49, v35, 1u);
                  v49 = (int)v33;
                  v32 = v39;
                }
                v50 = v35;
                v33[v34 + v32] = 0;
                memcpy((void *)(v49 + v34), (const void *)v45, v32);
              }
            }
          }
          sub_1AAC0(a2, &v44);
        }
        if ( v49 )
        {
          v50 = 0;
          qfree((void *)v49);
          v49 = 0;
          v51 = 0;
        }
      }
      if ( v45 )
      {
        v46 = 0;
        qfree((void *)v45);
        v45 = 0;
        v47 = 0;
      }
    }
  }
  v36 = a2[1];
  qfindclose((int)&v56);
  return v36;
}
// 17B50: using guessed type int __cdecl __strlen_chk(_DWORD, _DWORD);
