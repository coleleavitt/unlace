__int64 __fastcall sub_412230(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v7; // rsi
  int v8; // eax
  unsigned int v9; // edx
  const char *v10; // rcx
  _QWORD *v11; // rdx
  __int64 v12; // rsi
  int v14; // eax
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rbx
  int v22; // r9d
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rax
  void *v26; // rax
  __int64 v27; // rax
  _DWORD *v28; // rax
  __int64 v29; // rax
  unsigned int v30; // [rsp+1Ch] [rbp-10Ch] BYREF
  __int64 v31; // [rsp+20h] [rbp-108h] BYREF
  int v32; // [rsp+2Ch] [rbp-FCh] BYREF
  void *src; // [rsp+30h] [rbp-F8h] BYREF
  size_t n; // [rsp+38h] [rbp-F0h]

  if ( a3 <= 1 )
  {
    v10 = "option ?arg ...?";
    v11 = a4;
    v12 = 1;
LABEL_5:
    sub_458930(a2, v12, v11, v10);
    return 1;
  }
  else
  {
    v7 = a4[1];
    v8 = sub_4584C0(a2, v7, (unsigned int)off_653EA0, 8, (unsigned int)"option", 0, (__int64)&v32);
    v9 = 1;
    if ( !v8 )
    {
      switch ( v32 )
      {
        case 0:
        case 1:
          if ( a3 == 3 )
          {
            v25 = sub_445140(a2, 0, 1);
            v15 = a4[2];
            v31 = v25;
            goto LABEL_11;
          }
          v10 = "?encoding? data";
          if ( a3 != 4 )
            goto LABEL_24;
          v14 = sub_445D30(a2, a4[2], &v31, "?encoding? data");
          v9 = 1;
          if ( !v14 )
          {
            v15 = a4[3];
LABEL_11:
            if ( v32 )
            {
              v16 = *(_QWORD *)(v15 + 8);
              if ( v16 )
              {
                v17 = *(unsigned int *)(v15 + 16);
                v30 = *(_DWORD *)(v15 + 16);
              }
              else
              {
                v29 = sub_47ACD0(v15, &v30);
                v17 = v30;
                v16 = v29;
              }
              sub_444880(v31, v16, v17, &src);
              v18 = sub_40D3B0(src, n);
            }
            else
            {
              v28 = sub_40D5E0(v15, &v30);
              sub_4445F0(v31, v28, v30, &src);
              v18 = sub_48DF10(src, (unsigned int)n);
            }
            sub_48AFD0(a2, v18);
            sub_49F100(&src);
            sub_444080(v31);
            return 0;
          }
          return v9;
        case 2:
          if ( a3 > 3 )
          {
            sub_458930(a2, 2, a4, "?dirList?");
            return 1;
          }
          if ( a3 == 2 )
          {
            v24 = sub_443EA0(a2, v7, 1);
          }
          else
          {
            v21 = a4[2];
            if ( (unsigned int)sub_443EB0(v21, v7, 1) == 1 )
            {
              v23 = *(_QWORD *)(v21 + 8);
              if ( !v23 )
                LODWORD(v23) = sub_47B3B0(v21);
              sub_48B710(a2, (unsigned int)"expected directory list but got \"", v23, (unsigned int)"\"", 0, v22);
              return 1;
            }
            v24 = v21;
          }
          sub_48AFD0(a2, v24);
          v9 = 0;
          break;
        case 3:
          if ( a3 > 2 )
          {
            v10 = nullptr;
            goto LABEL_24;
          }
          sub_444160(a2, v7, 1);
          return 0;
        case 4:
          if ( a3 <= 3 )
          {
            if ( a3 == 2 )
            {
              v26 = (void *)sub_444150(0);
              v27 = sub_48DF10(v26, 0xFFFFFFFF);
              sub_48AFD0(a2, v27);
              return 0;
            }
            else
            {
              v19 = a4[2];
              v20 = *(_QWORD *)(v19 + 8);
              if ( !v20 )
                v20 = sub_47B3B0(v19);
              return (unsigned int)sub_445A60(a2, v20);
            }
          }
          v10 = "?encoding?";
LABEL_24:
          v11 = a4;
          v12 = 2;
          goto LABEL_5;
        default:
          return 0;
      }
    }
  }
  return v9;
}

