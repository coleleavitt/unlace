__int64 __fastcall sub_61F630(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int *v4; // rbx
  unsigned int v6; // eax
  __int64 v7; // r15
  unsigned int v8; // ebx
  __int64 v9; // rsi
  _BYTE *v10; // rdi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbp
  unsigned int v17; // ebx
  __int64 v18; // rbx
  unsigned int v20; // ebx
  unsigned int v21; // r15d
  unsigned int v22; // eax
  size_t v23; // rax
  __int64 v24; // rbx
  size_t v25; // r8
  size_t v26; // r9
  _BYTE *v27; // rsi
  size_t v28; // rdx
  __int64 v29; // rax
  size_t v31; // [rsp+8h] [rbp-480h]
  unsigned int v32; // [rsp+8h] [rbp-480h]
  size_t v33; // [rsp+10h] [rbp-478h]
  size_t v34; // [rsp+18h] [rbp-470h]
  __int64 v35; // [rsp+20h] [rbp-468h]
  unsigned int v36; // [rsp+28h] [rbp-460h]
  unsigned int v37; // [rsp+2Ch] [rbp-45Ch]
  unsigned int v38; // [rsp+38h] [rbp-450h] BYREF
  unsigned int v39; // [rsp+3Ch] [rbp-44Ch] BYREF
  char s[1032]; // [rsp+40h] [rbp-448h] BYREF
  unsigned __int64 v41; // [rsp+448h] [rbp-40h]

  v4 = *(unsigned int **)(*a1 + 1472);
  v41 = __readfsqword(0x28u);
  if ( *v4 )
  {
    v6 = ((__int64 (*)(void))sub_79B170)();
    v7 = *a1;
    v8 = *v4;
    v37 = v6;
    v35 = *a1;
    v36 = sub_79B170(*a1);
    if ( (unsigned __int8)sub_79B130(v7, v8) )
    {
      if ( v36 != -1 )
      {
        v9 = *a1;
        v10 = *(_BYTE **)a2;
        v38 = *(_DWORD *)(*a1 + 1332);
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
          v11 = sub_79B3A0(&v38, v9, 4026531840LL, 65);
          if ( !v11 )
            sub_384000(1246, v9, v12, v13);
          v16 = *a1;
          v17 = (__int16)v11 - 1;
          switch ( (__int16)v11 )
          {
            case 'e':
              v20 = *(unsigned __int16 *)(a3 + 12);
              break;
            case 'f':
              v20 = *(_DWORD *)(a3 + 32);
              break;
            case 'g':
              v20 = *(_DWORD *)(a3 + 56);
              break;
            case 'h':
              v20 = *(_DWORD *)(a1[2] + 4);
              break;
            case 'i':
              v22 = sub_614FB0(*a1, 5, v12, v13, v14, v15);
              v16 = *a1;
              v20 = v22;
              break;
            case 'j':
              v20 = *(_DWORD *)(a3 + 16);
              break;
            case 'k':
              v20 = *(_DWORD *)(a3 + 80);
              break;
            case 'l':
              v20 = *(_DWORD *)(a3 + 104);
              break;
            case 'm':
              v20 = *(_DWORD *)(a3 + 128);
              break;
            case 'n':
              v20 = *(_DWORD *)(a3 + 152);
              break;
            case 'o':
              v20 = *(_DWORD *)(a3 + 176);
              break;
            case 'p':
              v20 = *(_DWORD *)(a3 + 200);
              break;
            default:
              v32 = sub_79B170(*a1);
              if ( !(unsigned __int8)sub_79B130(v16, v37) || v32 == -1 )
              {
                if ( !under_debugger )
                  interr(3124);
                BUG();
              }
              if ( sub_375980(0x53u, &v39, a3, v17) == 1 || sub_375980(0x4Fu, &v39, v17) == 1 )
                v20 = v39;
              else
                v20 = -1;
              sub_79B130(v16, v32);
              v16 = *a1;
              break;
          }
          while ( 1 )
          {
            v21 = sub_79B3A0(&v38, v16, v20, 65) - 1;
            if ( v21 > 0x10000000 )
              break;
            v16 = *a1;
            v20 = v21;
          }
          if ( sub_79B660(&v38, *a1, v20, s, 1024, 83) > 0 )
            goto LABEL_29;
          if ( v21 != -1 )
          {
            v38 = v21;
            goto LABEL_16;
          }
          v21 = sub_79B3A0(&v38, *a1, 0xFFFFFFFFLL, 65) - 1;
          if ( sub_79B660(&v38, *a1, 0xFFFFFFFFLL, s, 1024, 83) > 0 )
          {
LABEL_29:
            v23 = strlen(s);
            v24 = *(_QWORD *)(a2 + 8);
            v25 = v23;
            v26 = v23;
            if ( v24 )
            {
              --v24;
              v26 = v23 + v24;
            }
            v27 = *(_BYTE **)a2;
            v28 = v26 + 1;
            if ( *(_QWORD *)(a2 + 16) < v26 + 1 )
            {
              v34 = v23;
              v33 = v26;
              v31 = v26 + 1;
              v29 = qvector_reserve(a2, v27, v28, 1);
              v25 = v34;
              v26 = v33;
              *(_QWORD *)a2 = v29;
              v27 = (_BYTE *)v29;
              v28 = v31;
            }
            *(_QWORD *)(a2 + 8) = v28;
            v27[v26] = 0;
            memmove((void *)(v24 + *(_QWORD *)a2), s, v25);
          }
          v38 = v21;
          if ( v21 == -1 )
          {
            v18 = (*(_QWORD *)(a2 + 8) == 0) + *(_QWORD *)(a2 + 8) - 1LL;
            sub_79B130(v35, v36);
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

