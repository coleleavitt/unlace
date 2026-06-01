/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_435670
// Address: 0x00435670

//----- (00435670) --------------------------------------------------------
int __userpurge sub_435670@<eax>(int a1@<ecx>, __m128i a2@<xmm0>, int *a3)
{
  const CHAR **v4; // ebx
  int *v5; // esi
  int (__stdcall *v6)(_DWORD, _DWORD, int, const CHAR *); // edx
  int v7; // ecx
  const CHAR *v8; // eax
  int v9; // eax
  int v10; // edx
  int v11; // esi
  int (__stdcall *v12)(void **, int); // eax
  int v13; // eax
  char *v14; // ecx
  unsigned __int8 *v15; // ecx
  char *v16; // ecx
  char *v17; // esi
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  _BYTE *v22; // ecx
  int v23; // eax
  int v24; // esi
  int v25; // eax
  char *v26; // eax
  bool v27; // zf
  int v28; // eax
  int v29; // ecx
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int (__stdcall *v33)(_DWORD, _DWORD); // eax
  int v34; // eax
  int v36; // eax
  int (__stdcall *v37)(_DWORD, _DWORD); // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  char *v44; // ebx
  signed int v45; // eax
  signed int v46; // esi
  int v47; // eax
  int (__stdcall *v48)(_DWORD, char *, _DWORD, signed int, int, int); // eax
  int v49; // eax
  int v50; // eax
  char *v51; // eax
  char *v52; // esi
  void (__stdcall *v53)(_DWORD, char *); // eax
  int v54; // eax
  int v55; // [esp-4h] [ebp-58h]
  char v56[8]; // [esp+10h] [ebp-44h] BYREF
  __int64 v57; // [esp+18h] [ebp-3Ch]
  void *v58[3]; // [esp+20h] [ebp-34h] BYREF
  void *v59; // [esp+2Ch] [ebp-28h] BYREF
  int v60; // [esp+30h] [ebp-24h]
  int v61; // [esp+34h] [ebp-20h]
  int v62; // [esp+38h] [ebp-1Ch] BYREF
  int v63; // [esp+3Ch] [ebp-18h]
  int v64; // [esp+40h] [ebp-14h]
  int v65; // [esp+44h] [ebp-10h]
  int v66; // [esp+50h] [ebp-4h]

LABEL_1:
  v4 = (const CHAR **)(a1 + 164);
LABEL_2:
  while ( 2 )
  {
    v5 = a3;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                do
                {
                  while ( (*(int (__stdcall **)(const CHAR **, _DWORD))(a1 + 116))(v4, *(_DWORD *)(a1 + 120)) < 0 )
                  {
                    if ( !*(_DWORD *)(a1 + 144) )
                    {
                      v9 = 37;
                      if ( !*(_DWORD *)(a1 + 188) )
                        v9 = 34;
LABEL_133:
                      *v5 = v9;
                      return 0;
                    }
                    sub_436060(a1, (int)v4, a1);
                  }
                  v6 = *(int (__stdcall **)(_DWORD, _DWORD, int, const CHAR *))(a1 + 92);
                  v7 = *(_DWORD *)(a1 + 160) + 1;
                  *(_DWORD *)(a1 + 160) = v7;
                  if ( v6 )
                  {
                    v8 = MultiByteStr;
                    if ( v4[1] )
                      v8 = *v4;
                    v9 = v6(*(_DWORD *)(a1 + 112), *(_DWORD *)(a1 + 156), v7, v8);
                    if ( v9 )
                      goto LABEL_133;
                  }
                  v10 = *(_DWORD *)(a1 + 168);
                  if ( ((v10 - 1) & (unsigned int)-(v10 != 0)) > 1 )
                  {
                    v11 = v10 - 2;
                    if ( !v10 )
                      v11 = -1;
                    if ( *(_BYTE *)sub_4033A0(v4, v11) == 92 )
                    {
                      while ( *(_BYTE *)sub_4033A0(v4, v11 - 1) != 92 )
                      {
                        v59 = nullptr;
                        v60 = 0;
                        v61 = 0;
                        v55 = *(_DWORD *)(a1 + 120);
                        v12 = *(int (__stdcall **)(void **, int))(a1 + 116);
                        v66 = 0;
                        if ( v12(&v59, v55) < 0 )
                        {
                          v66 = 1;
                          if ( v59 )
                          {
                            v60 = 0;
                            sub_453A20(v59);
                            v59 = nullptr;
                            v61 = 0;
                          }
                          v66 = -1;
                          break;
                        }
                        ++*(_DWORD *)(a1 + 160);
                        sub_437840((int)v4, 1);
                        sub_40CC20((int)v4, (unsigned int *)&v59);
                        v13 = *(_DWORD *)(a1 + 168);
                        v11 = v13 - 2;
                        if ( !v13 )
                          v11 = -1;
                        v66 = 2;
                        if ( v59 )
                        {
                          v60 = 0;
                          sub_453A20(v59);
                          v59 = nullptr;
                          v61 = 0;
                        }
                        v66 = -1;
                        if ( *(_BYTE *)sub_4033A0(v4, v11) != 92 )
                          break;
                      }
                    }
                    if ( *(_BYTE *)sub_4033A0(v4, v11) == 92 && *(_BYTE *)sub_4033A0(v4, v11 - 1) == 92 )
                      sub_437840((int)v4, 1);
                  }
                  v5 = a3;
                }
                while ( *(_DWORD *)(a1 + 168) <= 1u );
                v14 = (char *)*v4;
                *(_DWORD *)(a1 + 4) = *v4;
                if ( sub_437000(*v14) )
                {
                  do
                  {
                    v16 = (char *)(v15 + 1);
                    *(_DWORD *)(a1 + 4) = v16;
                  }
                  while ( sub_437000(*v16) );
                }
                if ( !*(_BYTE *)(a1 + 80) && *v15 == 35 )
                  break;
                if ( !*(_DWORD *)(a1 + 180) )
                {
                  *a3 = 0;
                  return *(_DWORD *)(a1 + 4);
                }
                sub_433940((_BYTE *)a1, v15);
              }
              *(_DWORD *)(a1 + 4) = v15 + 1;
              v17 = sub_434500(a1);
              sub_433940((_BYTE *)a1, *(unsigned __int8 **)(a1 + 4));
              v18 = strcmp(v17, "else");
              if ( v18 )
                v18 = v18 < 0 ? -1 : 1;
              if ( v18 )
                break;
              if ( !*(_DWORD *)(a1 + 188) )
                goto LABEL_134;
              v5 = a3;
              if ( !*(_DWORD *)(a1 + 184) )
              {
                v19 = *(_DWORD *)(a1 + 180);
                if ( v19 < 2 )
                {
                  LOBYTE(v18) = v19 == 0;
                  *(_DWORD *)(a1 + 180) = v18;
                }
              }
            }
            v20 = strcmp(v17, "elif");
            if ( v20 )
              v20 = v20 < 0 ? -1 : 1;
            if ( v20 )
              break;
            if ( !*(_DWORD *)(a1 + 188) )
            {
LABEL_134:
              *a3 = 35;
              return 0;
            }
            v5 = a3;
            if ( !*(_DWORD *)(a1 + 184) )
            {
              if ( (*(_BYTE *)(a1 + 180) & 1) != 0 )
                goto LABEL_53;
              *(_DWORD *)(a1 + 180) = 2;
            }
          }
          v21 = strcmp(v17, (const char *)&dword_48BEC0);
          if ( v21 )
            v21 = v21 < 0 ? -1 : 1;
          if ( !v21 )
          {
            ++*(_DWORD *)(a1 + 188);
            if ( *(_DWORD *)(a1 + 180) )
            {
              ++*(_DWORD *)(a1 + 184);
              goto LABEL_2;
            }
LABEL_53:
            v22 = *(_BYTE **)(a1 + 4);
            do
              *(_DWORD *)(a1 + 4) = --v22;
            while ( *v22 );
            a2 = 0;
            *v22 = *(_BYTE *)(a1 + 280);
            v56[0] = 1;
            v57 = 0;
            if ( !sub_433B00(a1, (void **)v4, a1, (int)v56) )
            {
              if ( v57 )
                *(_DWORD *)(a1 + 180) = 0;
              else
                *(_DWORD *)(a1 + 180) = 1;
              goto LABEL_2;
            }
            v39 = sub_45C9E0();
LABEL_136:
            *a3 = v39;
            return 0;
          }
          v23 = strcmp(v17, "ifdef");
          if ( v23 )
            v23 = v23 < 0 ? -1 : 1;
          if ( !v23 )
          {
            v24 = 1;
            goto LABEL_67;
          }
          v25 = strcmp(v17, "ifndef");
          if ( v25 )
            v25 = v25 < 0 ? -1 : 1;
          if ( v25 )
            break;
          v24 = 0;
LABEL_67:
          v26 = sub_434500(a1);
          if ( !*v26 )
            goto LABEL_142;
          ++*(_DWORD *)(a1 + 188);
          if ( *(_DWORD *)(a1 + 180) )
          {
            ++*(_DWORD *)(a1 + 184);
            goto LABEL_2;
          }
          v27 = (sub_4341B0(a1, (int)v4, v26) != nullptr) == v24;
          v5 = a3;
          if ( !v27 )
            *(_DWORD *)(a1 + 180) = 1;
        }
        v28 = strcmp(v17, "endif");
        if ( v28 )
          v28 = v28 < 0 ? -1 : 1;
        if ( !v28 )
        {
          v29 = *(_DWORD *)(a1 + 188);
          if ( v29 )
          {
            v30 = *(_DWORD *)(a1 + 184);
            if ( v30 )
              *(_DWORD *)(a1 + 184) = v30 - 1;
            else
              *(_DWORD *)(a1 + 180) = 0;
            *(_DWORD *)(a1 + 188) = v29 - 1;
            goto LABEL_2;
          }
          *a3 = 36;
          return 0;
        }
        if ( *(_DWORD *)(a1 + 180) )
          goto LABEL_2;
        v31 = strcmp(v17, "pragma");
        if ( v31 )
          v31 = v31 < 0 ? -1 : 1;
        if ( !v31 )
        {
          v32 = strcmp(*(const char **)(a1 + 4), "once");
          if ( v32 )
            v32 = v32 < 0 ? -1 : 1;
          if ( !v32 )
          {
            sub_401340(v58, *(const char **)(a1 + 156));
            v66 = 3;
            sub_431F80((int *)(a1 + 128), (unsigned int *)v58);
            v66 = -1;
            sub_401400(v58);
            goto LABEL_2;
          }
          v33 = *(int (__stdcall **)(_DWORD, _DWORD))(a1 + 96);
          if ( !v33 )
            goto LABEL_2;
          v34 = v33(*(_DWORD *)(a1 + 112), *(_DWORD *)(a1 + 4));
          v5 = a3;
          goto LABEL_90;
        }
        v36 = strcmp(v17, "warning");
        if ( v36 )
          v36 = v36 < 0 ? -1 : 1;
        if ( v36 )
          break;
        v37 = *(int (__stdcall **)(_DWORD, _DWORD))(a1 + 100);
        v5 = a3;
        if ( v37 )
        {
          v34 = v37(*(_DWORD *)(a1 + 112), *(_DWORD *)(a1 + 4));
LABEL_90:
          *v5 = v34;
          if ( v34 )
            return 0;
        }
      }
      LOBYTE(v63) = 0;
      LOBYTE(v64) = 0;
      v38 = strcmp(v17, "softinclude");
      if ( v38 )
        v38 = v38 < 0 ? -1 : 1;
      if ( !v38 )
      {
        LOBYTE(v63) = 1;
        goto LABEL_101;
      }
      v40 = strcmp(v17, "include_next");
      if ( v40 )
        v40 = v40 < 0 ? -1 : 1;
      if ( !v40 )
      {
        LOBYTE(v64) = 1;
LABEL_101:
        v39 = sub_434A30(a1, (void **)v4, a2, v63, v64);
        if ( !v39 )
          goto LABEL_2;
        goto LABEL_136;
      }
      v41 = strcmp(v17, "include");
      if ( v41 )
        v41 = v41 < 0 ? -1 : 1;
      if ( !v41 )
        goto LABEL_101;
      v42 = strcmp(v17, "import");
      if ( v42 )
        v42 = v42 < 0 ? -1 : 1;
      if ( !v42 )
        goto LABEL_101;
      v43 = strcmp(v17, "define");
      if ( v43 )
        v43 = v43 < 0 ? -1 : 1;
      if ( v43 )
        break;
      v44 = sub_434500(a1);
      if ( !*v44 )
        goto LABEL_142;
      LOBYTE(v65) = *(_BYTE *)(a1 + 280) == 40;
      v45 = sub_436DC0(a1);
      v46 = v45;
      if ( v45 == -2 )
        goto LABEL_1;
      if ( v45 < 0 )
        goto LABEL_142;
      v47 = sub_431BE0(a1, (int)v44, v44, *(const char **)(a1 + 4), v45, v65, (bool *)&v62);
      *a3 = v47;
      if ( v47 )
        return 0;
      v48 = *(int (__stdcall **)(_DWORD, char *, _DWORD, signed int, int, int))(a1 + 104);
      if ( v48 )
      {
        v49 = v48(*(_DWORD *)(a1 + 112), v44, *(_DWORD *)(a1 + 4), v46, v65, v62);
        v5 = a3;
        *a3 = v49;
        if ( v49 )
          return 0;
        v4 = (const CHAR **)(a1 + 164);
      }
      else
      {
        v4 = (const CHAR **)(a1 + 164);
        v5 = a3;
      }
    }
    v50 = strcmp(v17, "undef");
    if ( v50 )
      v50 = v50 < 0 ? -1 : 1;
    if ( v50 )
    {
      v54 = strcmp(v17, "error");
      if ( v54 )
        v54 = v54 < 0 ? -1 : 1;
      if ( v54 )
        goto LABEL_142;
      *a3 = 41;
      sub_45CB10(0, *(const char **)(a1 + 4));
      return 0;
    }
    else
    {
      v51 = sub_434500(a1);
      v52 = v51;
      if ( *v51 )
      {
        sub_435390(a1, (int)v4, v51);
        v53 = *(void (__stdcall **)(_DWORD, char *))(a1 + 108);
        if ( v53 )
          v53(*(_DWORD *)(a1 + 112), v52);
        continue;
      }
LABEL_142:
      *a3 = 29;
      return 0;
    }
  }
}
// 435870: variable 'v15' is possibly undefined
// 48BEC0: using guessed type int dword_48BEC0;
