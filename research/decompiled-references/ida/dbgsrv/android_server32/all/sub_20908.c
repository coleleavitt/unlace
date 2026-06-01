/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_20908
// Address: 0x00020908

//----- (00020908) --------------------------------------------------------
int __fastcall sub_20908(int a1, int a2, int a3)
{
  int v3; // r3
  _DWORD *v4; // r4
  int v5; // r7
  int v6; // r1
  int *v7; // r2
  int v8; // r0
  int v9; // r2
  int v10; // r5
  int v11; // r1
  enum __ptrace_request v12; // r0
  FILE *v13; // r0
  FILE *v14; // r2
  int v15; // r0
  int v16; // r0
  int v17; // r0
  unsigned __int8 v18; // r0
  unsigned __int8 *v19; // r1
  int v20; // r0
  _DWORD *v21; // r0
  _DWORD *v22; // r0
  bool v23; // zf
  int v24; // r1
  int v26; // [sp+4h] [bp-1048h]
  FILE *stream; // [sp+8h] [bp-1044h]
  char *v28; // [sp+Ch] [bp-1040h]
  unsigned __int8 *v29; // [sp+Ch] [bp-1040h]
  int v30; // [sp+Ch] [bp-1040h]
  _BYTE *v31; // [sp+14h] [bp-1038h]
  _BYTE *v32; // [sp+18h] [bp-1034h]
  _BYTE *v33; // [sp+1Ch] [bp-1030h]
  int v36; // [sp+30h] [bp-101Ch]
  char *s1; // [sp+3Ch] [bp-1010h] BYREF
  unsigned int v39; // [sp+40h] [bp-100Ch]
  int v40; // [sp+44h] [bp-1008h]
  char v41[4100]; // [sp+48h] [bp-1004h] BYREF

  v3 = a3;
  v4 = *(_DWORD **)(a1 + 912);
  v5 = 1;
  v36 = a1 + 916;
  if ( v4 != (_DWORD *)(a1 + 916) )
  {
    v31 = (_BYTE *)(a1 + 979);
    v32 = (_BYTE *)(a1 + 977);
    v33 = (_BYTE *)(a1 + 1020);
    v5 = 1;
    while ( 1 )
    {
      v10 = v5;
      if ( (v4[4] != a2) != v3 )
        goto LABEL_51;
      if ( v4[10] || *((_BYTE *)v4 + 44) )
        break;
      v6 = v4[6];
      v7 = v4 + 6;
      if ( !*((_BYTE *)v4 + 45) )
      {
        v3 = a3;
        if ( v6 )
        {
          if ( !under_debugger )
            interr(30188);
LABEL_64:
          __debugbreak();
        }
        goto LABEL_51;
      }
      v3 = a3;
      if ( v6 >= 1 )
        goto LABEL_15;
LABEL_16:
      if ( (int)v4[7] <= 0 && !*((_BYTE *)v4 + 45) && (*v33 || v4[10] == 2) && !*v32 && (unsigned int)(v4[10] - 1) <= 1 )
      {
        v12 = PTRACE_SINGLESTEP;
        if ( *((_BYTE *)v4 + 36) )
          *v31 = 1;
        else
          v12 = PTRACE_CONT;
        if ( !ptrace(v12, v4[5], 0, v4[8]) )
          goto LABEL_47;
        if ( v4[10] == 2 )
          goto LABEL_50;
        qsnprintf(v41, 4096, "/proc/%u/status");
        v13 = fopenRT(v41);
        if ( v13 )
        {
          v5 = 0;
          v39 = 0;
          s1 = nullptr;
          v40 = 0;
          stream = v13;
          v26 = qgetline(&s1, v13);
          if ( v26 < 0 )
            goto LABEL_41;
          v14 = stream;
          if ( v39 < 7 || (v28 = s1, v15 = strncmp(s1, "State:", 6u), v14 = stream, v15) )
          {
            v26 = qgetline(&s1, v14);
            if ( v26 < 0 )
              goto LABEL_41;
            v14 = stream;
            if ( v39 < 7 || (v28 = s1, v16 = strncmp(s1, "State:", 6u), v14 = stream, v16) )
            {
              v26 = qgetline(&s1, v14);
              if ( v26 >= 0 && v39 >= 7 )
              {
                v28 = s1;
                v17 = strncmp(s1, "State:", 6u);
                v14 = stream;
                if ( !v17 )
                  goto LABEL_37;
LABEL_42:
                qfclose(v14);
                v9 = 32;
                v3 = a3;
                if ( v26 >= 0 )
                {
                  if ( !under_debugger )
                    interr(30060);
                  goto LABEL_64;
                }
                goto LABEL_43;
              }
LABEL_41:
              v14 = stream;
              goto LABEL_42;
            }
          }
LABEL_37:
          v18 = v28[6];
          v19 = (unsigned __int8 *)(v28 + 6);
          if ( !v18 )
            goto LABEL_42;
          while ( 1 )
          {
            v29 = v19;
            if ( !isspace(v18) )
              break;
            v18 = v29[1];
            v19 = v29 + 1;
            if ( !v18 )
              goto LABEL_41;
          }
          qfclose(stream);
          v9 = *v29;
          v3 = a3;
LABEL_43:
          if ( s1 )
          {
            v30 = v9;
            v39 = 0;
            qfree(s1);
            v40 = 0;
            s1 = nullptr;
            v3 = a3;
            v9 = v30;
          }
          if ( v9 != 90 )
            goto LABEL_51;
          sub_1C868(a1, v4[5], 2);
LABEL_47:
          v20 = v4[10];
          if ( v20 == 1 )
          {
            v8 = 0;
            goto LABEL_8;
          }
          if ( v20 != 2 )
          {
            if ( !under_debugger )
              interr(30178);
            goto LABEL_64;
          }
LABEL_50:
          v8 = 3;
LABEL_8:
          v4[10] = v8;
          v5 = v10;
        }
        else
        {
          v5 = 0;
        }
        v3 = a3;
      }
LABEL_51:
      v21 = (_DWORD *)v4[1];
      if ( v21 )
      {
        do
        {
          v4 = v21;
          v21 = (_DWORD *)*v21;
        }
        while ( v21 );
      }
      else
      {
        v22 = v4 + 2;
        v23 = *(_DWORD *)v4[2] == (_DWORD)v4;
        v4 = (_DWORD *)v4[2];
        if ( !v23 )
        {
          do
          {
            v24 = *v22;
            v22 = (_DWORD *)(*v22 + 8);
            v4 = *(_DWORD **)(v24 + 8);
          }
          while ( *v4 != v24 );
        }
      }
      if ( v4 == (_DWORD *)v36 )
        return v5;
    }
    v6 = v4[6];
    v7 = v4 + 6;
    if ( v6 < 1 )
      goto LABEL_16;
LABEL_15:
    v11 = v6 - 1;
    *v7 = v11;
    if ( v11 > 0 )
      goto LABEL_51;
    goto LABEL_16;
  }
  return v5;
}
// E0550: using guessed type char under_debugger;
