__int64 __fastcall sub_93DD80(__int64 a1, unsigned int *a2, double a3)
{
  unsigned int v5; // eax
  __int64 v6; // rsi
  unsigned int v7; // r15d
  _DWORD *v8; // rax
  __int64 v10; // rbp
  _DWORD *v11; // rax
  unsigned int *v12; // rsi
  __int64 v13; // r14
  __int64 v14; // rbp
  _DWORD *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned int *v19; // rax
  unsigned int *v20; // r15
  __int64 v21; // rcx
  unsigned int v22; // eax
  unsigned int v23; // r13d
  __int64 v24; // rdx
  __int64 v25; // rax
  _DWORD *v26; // rax
  unsigned int v27; // eax
  _DWORD *v28; // rax
  __int64 v29; // rax
  _DWORD *v30; // rdx
  _DWORD *v31; // rax
  _DWORD *v32; // rdx
  __int64 v33; // [rsp+10h] [rbp-D8h]
  unsigned int v34; // [rsp+18h] [rbp-D0h]
  unsigned int v35; // [rsp+2Ch] [rbp-BCh]
  char v36; // [rsp+37h] [rbp-B1h] BYREF
  __int64 v37; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+40h] [rbp-A8h] BYREF
  unsigned int *v39; // [rsp+48h] [rbp-A0h] BYREF
  _QWORD v40[4]; // [rsp+50h] [rbp-98h] BYREF
  char v41[32]; // [rsp+70h] [rbp-78h] BYREF
  char v42[88]; // [rsp+90h] [rbp-58h] BYREF

  v5 = sub_186AF30(a1, a2);
  if ( !(_BYTE)v5 )
  {
    v6 = *((_QWORD *)a2 + 5);
    if ( !*(_WORD *)(v6 + 4) )
    {
      v7 = v5;
      v8 = *(_DWORD **)(*(_QWORD *)(v6 + 16) + 24LL);
      if ( v8 )
      {
        if ( *v8 == 5 && !v8[1] )
        {
          v40[0] = 0;
          v10 = *((_QWORD *)a2 + 4);
          v40[1] = 0;
          v40[2] = 1;
          v40[3] = 0;
          sub_1666AE0(a1 + 208, v6, v40, &v36);
          sub_894960((__int64)v41, (__int64)v40);
          if ( *(_WORD *)(v10 + 4) )
            goto LABEL_14;
          if ( (unsigned __int8)sub_91CC40(v10, &v37, &v38) )
          {
            if ( (unsigned __int8)sub_91EF50(a1 + 208, v38, &v39) )
            {
              v12 = v39;
              if ( *((_WORD *)v39 + 2) || (v28 = *(_DWORD **)(*((_QWORD *)v39 + 2) + 24LL)) == nullptr || *v28 != 5 )
              {
                v29 = v37;
                if ( *(_WORD *)(v37 + 4) )
                  goto LABEL_57;
                v30 = *(_DWORD **)(*(_QWORD *)(v37 + 16) + 24LL);
                if ( !v30 || *v30 != 5 )
                  goto LABEL_57;
              }
            }
            if ( *(_WORD *)(v10 + 4) )
              goto LABEL_14;
          }
          if ( !(unsigned __int8)sub_91CC40(v10, &v37, &v38) )
          {
LABEL_11:
            if ( !(unsigned __int8)sub_91CC90(v10, &v37, &v38) )
              goto LABEL_12;
            if ( (unsigned __int8)sub_3DB3F0(a1 + 208, v37) )
            {
              if ( *(_WORD *)(v38 + 4) || (v26 = *(_DWORD **)(*(_QWORD *)(v38 + 16) + 24LL)) == nullptr || *v26 != 5 )
              {
                v12 = (unsigned int *)v38;
                v10 = sub_91F690(a1, v38);
                goto LABEL_15;
              }
            }
            if ( !*(_WORD *)(v10 + 4) )
            {
LABEL_12:
              v11 = *(_DWORD **)(*(_QWORD *)(v10 + 16) + 24LL);
              if ( v11 && *v11 == 5 )
                goto LABEL_25;
            }
LABEL_14:
            v12 = (unsigned int *)sub_91F690(a1, v10);
LABEL_15:
            v13 = (unsigned int)sub_938B60(a1, v12);
            v14 = (unsigned int)sub_938B60(a1, (unsigned int *)v10);
            if ( (_DWORD)v13 != -1 && (_DWORD)v14 != -1 )
            {
              if ( !*((_WORD *)a2 + 2) )
              {
                v15 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL);
                if ( v15 )
                {
                  if ( *v15 == 5 && v15[1] == 3 )
                  {
                    sub_91F5A0((__int64)v41);
                    v27 = v13;
                    v13 = (unsigned int)v14;
                    v14 = v27;
                  }
                }
              }
              v16 = *(_QWORD *)(a1 + 16);
              v17 = *(_QWORD *)(v16 + 8832);
              if ( v17 )
              {
                v18 = *a2;
                if ( (unsigned int)v18 < *(_DWORD *)(v17 - 4) && *(_DWORD *)(v17 + 4 * v18) != 0x7FFFFFFF )
                  goto LABEL_23;
              }
              v34 = sub_B67520(v16, a2);
              sub_8F1CE0(*(_QWORD *)(a1 + 16), v34, *(_DWORD *)(a1 + 8));
              v19 = (unsigned int *)sub_186B270(0x50u);
              *v19 = v34;
              v20 = v19;
              v19[1] = v13;
              v19[2] = v14;
              sub_91F480((__int64)(v19 + 4), (__int64)v41);
              v39 = v20;
              sub_92FB50((_QWORD *)(a1 + 288), &v39);
              v21 = *(_QWORD *)(a1 + 296);
              if ( v21 )
              {
                v22 = *(_DWORD *)(v21 - 4);
                v35 = v22;
                if ( v34 >= v22 )
                {
                  v23 = v34 + 1;
                  if ( v22 < v34 + 1 )
                  {
LABEL_31:
                    while ( !v21 || *(_DWORD *)(v21 - 8) < v23 )
                    {
                      sub_93DCA0((unsigned int **)(a1 + 296));
                      v21 = *(_QWORD *)(a1 + 296);
                    }
                    *(_DWORD *)(v21 - 4) = v23;
                    v24 = 8LL * v23;
                    v25 = 8LL * v35;
                    if ( v25 != v24 )
                    {
                      v33 = v21;
                      memset((void *)(v21 + v25), 0, v24 - v25);
                      v21 = v33;
                    }
                    goto LABEL_35;
                  }
                  *(_DWORD *)(v21 - 4) = v23;
                }
              }
              else
              {
                v23 = v34 + 1;
                if ( v34 != -1 )
                {
                  v35 = 0;
                  goto LABEL_31;
                }
              }
LABEL_35:
              *(_QWORD *)(v21 + 8LL * v34) = v20;
              sub_92FB50((_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 312) + 8 * v13) + 80 * v14 + 72), &v39);
              sub_92FB50((_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 312) + 8 * v14) + 80 * v13 + 72), &v39);
LABEL_23:
              v7 = 1;
LABEL_24:
              sub_25A130(v42);
              sub_25A130(v41);
              sub_25A130((char *)v40);
              return v7;
            }
LABEL_25:
            sub_92D370(a1, (__int64)a2, a3);
            goto LABEL_24;
          }
          if ( !(unsigned __int8)sub_91EF50(a1 + 208, v37, &v39)
            || (v12 = v39, !*((_WORD *)v39 + 2))
            && (v31 = *(_DWORD **)(*((_QWORD *)v39 + 2) + 24LL)) != nullptr
            && *v31 == 5
            || (v29 = v38, !*(_WORD *)(v38 + 4))
            && (v32 = *(_DWORD **)(*(_QWORD *)(v38 + 16) + 24LL)) != nullptr
            && *v32 == 5 )
          {
            if ( *(_WORD *)(v10 + 4) )
              goto LABEL_14;
            goto LABEL_11;
          }
LABEL_57:
          v10 = v29;
          goto LABEL_15;
        }
      }
    }
  }
  v7 = 0;
  sub_92D370(a1, (__int64)a2, a3);
  return v7;
}

