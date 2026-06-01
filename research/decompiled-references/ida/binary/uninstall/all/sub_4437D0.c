__int64 __fastcall sub_4437D0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int v6; // edx
  __int64 v8; // rax
  __int64 v9; // rbp
  int v10; // eax
  __int64 v11; // r14
  __int64 *v12; // rax
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rdx
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  unsigned int v20; // r15d
  __int64 v21; // rbp
  __int64 v22; // r15
  int v23; // edx
  int v24; // eax
  __int64 v25; // rax
  int v26; // r8d
  int v27; // r9d
  _DWORD *v28; // rcx
  int v29; // eax
  bool v30; // zf
  int v31; // eax
  __int64 v32; // rax
  __int64 *v33; // rdi
  int v34; // eax
  __int64 v35; // rax
  __int64 *v36; // rdi
  int v37; // eax
  __int64 v38; // rax
  int v39; // eax
  int v40; // eax
  __int64 v41; // rax
  __int64 *v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 *v46; // rdi
  __int64 v47; // rax
  __int64 *v48; // rdi
  int v49; // eax
  int v50; // eax
  __int64 v51; // rax
  __int64 *v52; // rdi
  __int64 v53; // rax
  __int64 *v54; // rdi
  __int64 v55; // rax
  __int64 *v56; // rdi
  int v57; // [rsp+4h] [rbp-94h]
  __int64 v58; // [rsp+8h] [rbp-90h]
  int v59; // [rsp+14h] [rbp-84h] BYREF
  __int64 v60; // [rsp+18h] [rbp-80h] BYREF
  int v61; // [rsp+24h] [rbp-74h] BYREF
  __int64 v62; // [rsp+28h] [rbp-70h] BYREF
  __int64 v63; // [rsp+30h] [rbp-68h] BYREF
  int v64; // [rsp+3Ch] [rbp-5Ch] BYREF
  _BYTE v65[40]; // [rsp+40h] [rbp-58h] BYREF

  v57 = 0;
  if ( a3 <= 2 )
  {
    sub_458930(a2, 1, a4, "dictVar ?key ...? script");
    return 1;
  }
  v8 = sub_4A43A0(a2, *(_QWORD *)(a4 + 8), 0, 512);
  v9 = v8;
  v6 = 1;
  if ( v8 )
  {
    if ( a3 <= 3 || (v9 = sub_440270(a2, v8, a3 - 3, a4 + 16, 0), v6 = 1, v9) )
    {
      v10 = sub_440900(a2, v9, (__int64)v65, &v62, &v63, &v64);
      v6 = 1;
      if ( !v10 )
      {
        v11 = sub_496740(a2, v9);
        v12 = off_656088;
        *(_DWORD *)(v11 + 16) = 0;
        *(_DWORD *)v11 = 1;
        v13 = v64;
        *(_QWORD *)(v11 + 24) = 0;
        *(_QWORD *)(v11 + 8) = v12;
        if ( !v13 )
        {
          while ( 1 )
          {
            sub_46FBF0(0, v11, v62);
            if ( !sub_4A4160(a2, v62, 0, v63, 512) )
              break;
            sub_440A10((__int64)v65, &v62, &v63, &v64, v14, v15);
            if ( v64 )
              goto LABEL_12;
          }
          v37 = *(_DWORD *)v11 - 1;
          v30 = *(_DWORD *)v11 == 1;
          *(_DWORD *)v11 = v37;
          if ( v37 < 0 || v30 )
          {
            v47 = *(_QWORD *)(v11 + 24);
            if ( v47 && *(_QWORD *)(v47 + 8) )
            {
              sub_47B120(v11);
            }
            else
            {
              v48 = *(__int64 **)(v11 + 8);
              if ( v48 && v48 != off_656088 )
                Tcl_Free((__int64)v48);
              *(_DWORD *)(v11 + 16) = -1;
              sub_496830(v11);
            }
          }
          sub_4409E0((__int64)v65);
          return 1;
        }
LABEL_12:
        v20 = sub_40B720(a2, *(_QWORD *)(a4 + 8LL * a3 - 8), 0, *(_QWORD **)(a2 + 952), a3 - 1);
        if ( v20 == 1 )
          sub_40BD40(a2, (__int64)"\n    (body of \"dict with\")", v16, v17, v18, v19);
        v21 = sub_4A43A0(a2, *(_QWORD *)(a4 + 8), 0, 0);
        if ( v21 )
        {
          v58 = sub_48B7B0(a2, v20);
          if ( (unsigned int)sub_4408B0(a2, v21, &v61) )
          {
            v31 = *(_DWORD *)v11 - 1;
            v30 = *(_DWORD *)v11 == 1;
            *(_DWORD *)v11 = v31;
            if ( v31 < 0 || v30 )
            {
              v32 = *(_QWORD *)(v11 + 24);
              if ( v32 && *(_QWORD *)(v32 + 8) )
              {
                sub_47B120(v11);
              }
              else
              {
                v33 = *(__int64 **)(v11 + 8);
                if ( v33 && v33 != off_656088 )
                  Tcl_Free((__int64)v33);
                *(_DWORD *)(v11 + 16) = -1;
                sub_496830(v11);
              }
            }
            goto LABEL_31;
          }
          if ( *(int *)v21 > 1 )
          {
            v21 = sub_47B2A0(v21);
            v57 = 1;
          }
          v22 = v21;
          if ( a3 <= 3 )
            goto LABEL_19;
          v38 = sub_440270(a2, v21, a3 - 3, a4 + 16, 3);
          v22 = v38;
          if ( !v38 )
          {
            v49 = *(_DWORD *)v11 - 1;
            v30 = *(_DWORD *)v11 == 1;
            *(_DWORD *)v11 = v49;
            if ( v49 < 0 || v30 )
            {
              v55 = *(_QWORD *)(v11 + 24);
              if ( v55 && *(_QWORD *)(v55 + 8) )
              {
                sub_47B120(v11);
              }
              else
              {
                v56 = *(__int64 **)(v11 + 8);
                if ( v56 && v56 != off_656088 )
                  Tcl_Free((__int64)v56);
                *(_DWORD *)(v11 + 16) = -1;
                sub_496830(v11);
              }
            }
            if ( v57 )
            {
              v50 = *(_DWORD *)v21 - 1;
              v30 = *(_DWORD *)v21 == 1;
              *(_DWORD *)v21 = v50;
              if ( v50 < 0 || v30 )
              {
                v51 = *(_QWORD *)(v21 + 24);
                if ( v51 && *(_QWORD *)(v51 + 8) )
                {
                  sub_47B120(v21);
                }
                else
                {
                  v52 = *(__int64 **)(v21 + 8);
                  if ( v52 && v52 != off_656088 )
                    Tcl_Free((__int64)v52);
                  *(_DWORD *)(v21 + 16) = -1;
                  sub_496830(v21);
                }
              }
            }
            goto LABEL_31;
          }
          if ( v38 == 1 )
          {
            v39 = *(_DWORD *)v11 - 1;
            v30 = *(_DWORD *)v11 == 1;
            *(_DWORD *)v11 = v39;
            if ( v39 < 0 || v30 )
            {
              v53 = *(_QWORD *)(v11 + 24);
              if ( v53 && *(_QWORD *)(v53 + 8) )
              {
                sub_47B120(v11);
              }
              else
              {
                v54 = *(__int64 **)(v11 + 8);
                if ( v54 && v54 != off_656088 )
                  Tcl_Free((__int64)v54);
                *(_DWORD *)(v11 + 16) = -1;
                sub_496830(v11);
              }
            }
            if ( v57 )
            {
              v40 = *(_DWORD *)v21 - 1;
              v30 = *(_DWORD *)v21 == 1;
              *(_DWORD *)v21 = v40;
              if ( v40 < 0 || v30 )
              {
                v41 = *(_QWORD *)(v21 + 24);
                if ( v41 && *(_QWORD *)(v41 + 8) )
                {
                  sub_47B120(v21);
                }
                else
                {
                  v42 = *(__int64 **)(v21 + 8);
                  if ( v42 && v42 != off_656088 )
                    Tcl_Free((__int64)v42);
                  *(_DWORD *)(v21 + 16) = -1;
                  sub_496830(v21);
                }
              }
            }
          }
          else
          {
LABEL_19:
            if ( *(_UNKNOWN ***)(v11 + 24) == &off_655E20 )
            {
              v43 = *(_QWORD *)(v11 + 32);
              v44 = v43 + 16;
              v23 = *(_DWORD *)(v43 + 8);
              v60 = v44;
              v59 = v23;
            }
            else
            {
              sub_46FD90(0, v11, &v59, &v60);
              v23 = v59;
            }
            v24 = 0;
            v61 = 0;
            if ( v23 > 0 )
            {
              do
              {
                v25 = sub_4A43A0(a2, *(_QWORD *)(v60 + 8LL * v24), 0, 0);
                v28 = (_DWORD *)v25;
                v63 = v25;
                if ( v25 )
                {
                  if ( v22 == v25 )
                    v28 = (_DWORD *)sub_47B2A0(v22);
                  sub_440560(0, v22, *(_QWORD *)(v60 + 8LL * v61), v28, v26, v27);
                }
                else
                {
                  sub_440760(0, v22, *(_QWORD *)(v60 + 8LL * v61), 0, v26, v27);
                }
                v24 = ++v61;
              }
              while ( v61 < v59 );
            }
            v29 = *(_DWORD *)v11 - 1;
            v30 = *(_DWORD *)v11 == 1;
            *(_DWORD *)v11 = v29;
            if ( v29 < 0 || v30 )
            {
              v45 = *(_QWORD *)(v11 + 24);
              if ( v45 && *(_QWORD *)(v45 + 8) )
              {
                sub_47B120(v11);
              }
              else
              {
                v46 = *(__int64 **)(v11 + 8);
                if ( v46 && v46 != off_656088 )
                  Tcl_Free((__int64)v46);
                *(_DWORD *)(v11 + 16) = -1;
                sub_496830(v11);
              }
            }
            if ( a3 > 3 )
              sub_440500(v22);
            if ( !sub_4A4160(a2, *(_QWORD *)(a4 + 8), 0, v21, 512) )
            {
LABEL_31:
              sub_48AE70(v58);
              return 1;
            }
          }
          return (unsigned int)sub_48B090(a2, v58);
        }
        v34 = *(_DWORD *)v11 - 1;
        v30 = *(_DWORD *)v11 == 1;
        *(_DWORD *)v11 = v34;
        if ( v34 < 0 || v30 )
        {
          v35 = *(_QWORD *)(v11 + 24);
          if ( v35 && *(_QWORD *)(v35 + 8) )
          {
            sub_47B120(v11);
            return v20;
          }
          else
          {
            v36 = *(__int64 **)(v11 + 8);
            if ( v36 && v36 != off_656088 )
              Tcl_Free((__int64)v36);
            *(_DWORD *)(v11 + 16) = -1;
            sub_496830(v11);
            return v20;
          }
        }
        else
        {
          return v20;
        }
      }
    }
  }
  return v6;
}

