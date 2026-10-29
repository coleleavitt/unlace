/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_23D70
// Address: 0x00023D70

//----- (00023D70) --------------------------------------------------------
int __cdecl sub_23D70(int a1, int a2, char a3)
{
  _DWORD *v3; // esi
  int result; // eax
  char v5; // cl
  int v6; // edi
  int *v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  bool v11; // zf
  enum __ptrace_request v12; // eax
  FILE *v13; // eax
  FILE *v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  char v18; // al
  char *v19; // edx
  int v20; // eax
  _DWORD *v21; // edx
  _DWORD *v22; // ecx
  int v23; // esi
  FILE *v24; // [esp+18h] [ebp-1034h]
  int v25; // [esp+1Ch] [ebp-1030h]
  char *v26; // [esp+1Ch] [ebp-1030h]
  char v27; // [esp+1Ch] [ebp-1030h]
  int v28; // [esp+20h] [ebp-102Ch]
  int v29; // [esp+28h] [ebp-1024h] BYREF
  unsigned int v30; // [esp+2Ch] [ebp-1020h]
  int v31; // [esp+30h] [ebp-101Ch]
  int v32[1029]; // [esp+38h] [ebp-1014h] BYREF

  v32[1024] = __readgsdword(0x14u);
  v3 = *(_DWORD **)(a1 + 568);
  if ( (_DWORD *)(a1 + 572) != v3 )
  {
    result = 1;
    while ( 1 )
    {
      v6 = result;
      if ( a3 != (v3[4] != a2) )
        goto LABEL_50;
      if ( v3[10] || *((_BYTE *)v3 + 44) )
      {
        v7 = v3 + 6;
        v8 = v3[6];
        if ( v8 > 0 )
          goto LABEL_10;
      }
      else
      {
        v8 = v3[6];
        if ( !*((_BYTE *)v3 + 45) )
        {
          v11 = v8 == 0;
          result = v6;
          if ( !v11 )
          {
            if ( !(_BYTE)under_debugger )
              interr(30188);
LABEL_65:
            BUG();
          }
          goto LABEL_51;
        }
        v7 = v3 + 6;
        if ( v8 > 0 )
        {
LABEL_10:
          v9 = v8 - 1;
          *v7 = v9;
          if ( v9 > 0 )
            goto LABEL_50;
        }
      }
      if ( (int)v3[7] > 0
        || *((_BYTE *)v3 + 45)
        || !*(_BYTE *)(a1 + 676) && v3[10] != 2
        || *(_BYTE *)(a1 + 633)
        || (unsigned int)(v3[10] - 1) > 1 )
      {
        goto LABEL_50;
      }
      v10 = *((unsigned __int8 *)v3 + 36);
      v11 = v10 == 0;
      v12 = 2 * v10 + 7;
      if ( !v11 )
        *(_BYTE *)(a1 + 635) = 1;
      if ( !ptrace(v12, v3[5], 0, v3[8]) )
        goto LABEL_41;
      if ( v3[10] == 2 )
        goto LABEL_43;
      qsnprintf(v32, 4096, "/proc/%u/status", v3[5]);
      v13 = fopenRT((char *)v32);
      if ( v13 )
      {
        v29 = 0;
        v30 = 0;
        v31 = 0;
        v24 = v13;
        v28 = qgetline(&v29, v13);
        if ( v28 >= 0 )
        {
          v14 = v24;
          if ( v30 >= 7 )
          {
            v25 = v29;
            v15 = strncmp((const char *)v29, "State:", 6u);
            v14 = v24;
            if ( !v15 )
              goto LABEL_31;
          }
          v28 = qgetline(&v29, v14);
          if ( v28 < 0 )
            goto LABEL_35;
          v14 = v24;
          if ( v30 >= 7 )
          {
            v25 = v29;
            v16 = strncmp((const char *)v29, "State:", 6u);
            v14 = v24;
            if ( !v16 )
            {
LABEL_31:
              v18 = *(_BYTE *)(v25 + 6);
              if ( !v18 )
                goto LABEL_36;
              v19 = (char *)(v25 + 7);
              while ( 1 )
              {
                v26 = v19;
                if ( !isspace(v18) )
                  break;
                v18 = *v26;
                v19 = v26 + 1;
                if ( !*v26 )
                  goto LABEL_35;
              }
              qfclose(v24);
              v5 = *(v26 - 1);
LABEL_37:
              if ( v29 )
              {
                v27 = v5;
                v30 = 0;
                qfree((void *)v29);
                v29 = 0;
                v31 = 0;
                v5 = v27;
              }
              result = 0;
              if ( v5 != 90 )
                goto LABEL_51;
              sub_1DBC0(a1, v3[5], 2);
LABEL_41:
              v20 = v3[10];
              if ( v20 == 1 )
              {
                v3[10] = 0;
              }
              else
              {
                if ( v20 != 2 )
                {
                  if ( !(_BYTE)under_debugger )
                    interr(30178);
                  goto LABEL_65;
                }
LABEL_43:
                v3[10] = 3;
              }
LABEL_50:
              result = v6;
              goto LABEL_51;
            }
          }
          v28 = qgetline(&v29, v14);
          if ( v28 >= 0 && v30 >= 7 )
          {
            v25 = v29;
            v17 = strncmp((const char *)v29, "State:", 6u);
            v14 = v24;
            if ( !v17 )
              goto LABEL_31;
LABEL_36:
            qfclose(v14);
            v5 = 32;
            if ( v28 >= 0 )
            {
              if ( !(_BYTE)under_debugger )
                interr(30060);
              goto LABEL_65;
            }
            goto LABEL_37;
          }
        }
LABEL_35:
        v14 = v24;
        goto LABEL_36;
      }
      result = 0;
LABEL_51:
      v21 = (_DWORD *)v3[1];
      if ( v21 )
      {
        do
        {
          v22 = v21;
          v21 = (_DWORD *)*v21;
        }
        while ( v21 );
      }
      else
      {
        v22 = (_DWORD *)v3[2];
        if ( (_DWORD *)*v22 != v3 )
        {
          v23 = (int)(v3 + 2);
          do
          {
            v22 = *(_DWORD **)(*(_DWORD *)v23 + 8);
            v11 = *v22 == *(_DWORD *)v23;
            v23 = *(_DWORD *)v23 + 8;
          }
          while ( !v11 );
        }
      }
      v3 = v22;
      if ( (_DWORD *)(a1 + 572) == v22 )
        return result;
    }
  }
  return 1;
}
// 13E34C: using guessed type int under_debugger;
