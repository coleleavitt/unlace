__int64 __fastcall sub_63C740(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int *v4; // rbx
  unsigned int v6; // eax
  __int64 v7; // r15
  unsigned int v8; // ebx
  __int64 v9; // rsi
  _BYTE *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbp
  unsigned int v17; // ebx
  __int64 v18; // rbx
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rbp
  unsigned int v23; // eax
  size_t v24; // rax
  __int64 v25; // rbx
  size_t v26; // r8
  size_t v27; // r9
  _BYTE *v28; // rsi
  size_t v29; // rdx
  __int64 v30; // rax
  size_t v32; // [rsp+10h] [rbp-488h]
  unsigned int v33; // [rsp+10h] [rbp-488h]
  size_t v34; // [rsp+18h] [rbp-480h]
  size_t v35; // [rsp+20h] [rbp-478h]
  __int64 v36; // [rsp+28h] [rbp-470h]
  unsigned int v37; // [rsp+30h] [rbp-468h]
  unsigned int v38; // [rsp+34h] [rbp-464h]
  __int64 v39; // [rsp+40h] [rbp-458h] BYREF
  __int64 v40; // [rsp+48h] [rbp-450h] BYREF
  char v41[1032]; // [rsp+50h] [rbp-448h] BYREF
  unsigned __int64 v42; // [rsp+458h] [rbp-40h]

  v4 = *(unsigned int **)(*a1 + 1664);
  v42 = __readfsqword(0x28u);
  if ( *v4 )
  {
    v6 = ((__int64 (*)(void))sub_7BE4E0)();
    v7 = *a1;
    v8 = *v4;
    v38 = v6;
    v36 = *a1;
    v37 = sub_7BE4E0(*a1);
    if ( (unsigned __int8)sub_7BE4A0(v7, v8) )
    {
      if ( v37 != -1 )
      {
        v9 = *a1;
        v10 = *(_BYTE **)a2;
        v39 = *(_QWORD *)(*a1 + 1520);
        if ( v10 )
        {
          *(_QWORD *)(a2 + 8) = 0;
          qfree(v10);
          *(_QWORD *)a2 = 0;
          *(_QWORD *)(a2 + 16) = 0;
          v9 = *a1;
        }
        while ( 1 )
        {
          v11 = sub_7BE710(&v39, v9, 4026531840LL, 65);
          if ( !v11 )
            sub_387D20(1246, v9, v12, v13);
          v16 = *a1;
          v17 = (__int16)v11 - 1;
          switch ( (__int16)v11 )
          {
            case 'e':
              v20 = *(unsigned __int16 *)(a3 + 24);
              break;
            case 'f':
              v20 = *(_QWORD *)(a3 + 48);
              break;
            case 'g':
              v20 = *(_QWORD *)(a3 + 88);
              break;
            case 'h':
              v20 = *(int *)(a1[2] + 4);
              break;
            case 'i':
              v23 = sub_631AD0(*a1, 5, v12, v13, v14, v15);
              v16 = *a1;
              v20 = v23;
              break;
            case 'j':
              v20 = *(unsigned int *)(a3 + 28);
              break;
            case 'k':
              v20 = *(_QWORD *)(a3 + 128);
              break;
            case 'l':
              v20 = *(_QWORD *)(a3 + 168);
              break;
            case 'm':
              v20 = *(_QWORD *)(a3 + 208);
              break;
            case 'n':
              v20 = *(_QWORD *)(a3 + 248);
              break;
            case 'o':
              v20 = *(_QWORD *)(a3 + 288);
              break;
            case 'p':
              v20 = *(_QWORD *)(a3 + 328);
              break;
            default:
              v33 = sub_7BE4E0(*a1);
              if ( !(unsigned __int8)sub_7BE4A0(v16, v38) || v33 == -1 )
              {
                if ( !under_debugger )
                  interr(3124);
                BUG();
              }
              if ( sub_3792E0(0x53u, &v40, a3, v17) == 1 || sub_3792E0(0x4Fu, &v40, v17) == 1 )
                v20 = v40;
              else
                v20 = -1;
              sub_7BE4A0(v16, v33);
              v16 = *a1;
              break;
          }
          while ( 1 )
          {
            v21 = sub_7BE710(&v39, v16, v20, 65);
            v22 = v21 - 1;
            if ( (unsigned __int64)(v21 - 1) > 0x10000000 )
              break;
            v20 = v21 - 1;
            v16 = *a1;
          }
          if ( sub_7BE9F0(&v39, *a1, v20, v41, 1024, 83) > 0 )
            goto LABEL_29;
          if ( v22 != -1 )
          {
            v39 = v22;
            goto LABEL_16;
          }
          v22 = sub_7BE710(&v39, *a1, -1, 65) - 1;
          if ( sub_7BE9F0(&v39, *a1, -1, v41, 1024, 83) > 0 )
          {
LABEL_29:
            v24 = strlen(v41);
            v25 = *(_QWORD *)(a2 + 8);
            v26 = v24;
            v27 = v24;
            if ( v25 )
            {
              --v25;
              v27 = v24 + v25;
            }
            v28 = *(_BYTE **)a2;
            v29 = v27 + 1;
            if ( *(_QWORD *)(a2 + 16) < v27 + 1 )
            {
              v35 = v24;
              v34 = v27;
              v32 = v27 + 1;
              v30 = qvector_reserve(a2, v28, v29, 1);
              v26 = v35;
              v27 = v34;
              *(_QWORD *)a2 = v30;
              v28 = (_BYTE *)v30;
              v29 = v32;
            }
            *(_QWORD *)(a2 + 8) = v29;
            v28[v27] = 0;
            memmove((void *)(v25 + *(_QWORD *)a2), v41, v26);
          }
          v39 = v22;
          if ( v22 == -1 )
          {
            v18 = (*(_QWORD *)(a2 + 8) == 0) + *(_QWORD *)(a2 + 8) - 1LL;
            sub_7BE4A0(v36, v37);
            return v18;
          }
LABEL_16:
          v9 = *a1;
        }
      }
    }
  }
  return -1;
}
