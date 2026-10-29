__int64 __fastcall sub_4420F0(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  unsigned int v6; // edx
  __int64 v8; // rsi
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r14
  __int64 v13; // r12
  __int64 v14; // r13
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // rcx
  int *v18; // rcx
  int v19; // eax
  bool v20; // zf
  unsigned int v21; // eax
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  int v25; // r9d
  int v26; // eax
  int v27; // eax
  int v28; // eax
  __int64 v29; // rax
  __int64 *v30; // rdi
  __int64 v31; // rax
  __int64 *v32; // rdi
  __int64 v33; // rax
  __int64 *v34; // rdi
  __int64 v35; // rax
  __int64 *v36; // rdi
  int v37; // r9d
  __int64 v38; // rdx
  int *v39; // rcx
  int v40; // eax
  __int64 v41; // rax
  __int64 *v42; // rdi
  int v43; // r9d
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  int v47; // ecx
  int v48; // r8d
  int v49; // r9d
  __int64 v50; // [rsp+0h] [rbp-78h] BYREF
  int *v51; // [rsp+8h] [rbp-70h] BYREF
  int v52; // [rsp+10h] [rbp-68h] BYREF
  int v53; // [rsp+14h] [rbp-64h] BYREF
  __int64 *v54; // [rsp+18h] [rbp-60h] BYREF
  _BYTE v55[40]; // [rsp+20h] [rbp-58h] BYREF

  if ( a3 != 4 )
  {
    sub_458930(a2, 1, a4, "{keyVar valueVar} dictionary script");
    return 1;
  }
  v8 = a4[1];
  if ( *(_UNKNOWN ***)(v8 + 24) == &off_655E20 )
  {
    v11 = *(_QWORD *)(v8 + 32);
    v54 = (__int64 *)(v11 + 16);
    v10 = *(_DWORD *)(v11 + 8);
    v53 = v10;
  }
  else
  {
    v9 = sub_46FD90(a2, v8, &v53, &v54);
    v6 = 1;
    if ( v9 )
      return v6;
    v10 = v53;
  }
  if ( v10 != 2 )
  {
    sub_48B860(a2, "must have exactly two variable names", 0);
    return 1;
  }
  v12 = a4[3];
  v13 = *v54;
  v14 = v54[1];
  v15 = sub_440900(a2, a4[2], (__int64)v55, &v50, &v51, &v52);
  v6 = 1;
  if ( !v15 )
  {
    ++*(_DWORD *)v13;
    v16 = 0;
    ++*(_DWORD *)v14;
    ++*(_DWORD *)v12;
    if ( !v52 )
    {
      while ( 1 )
      {
        v17 = v50;
        ++*v51;
        if ( !sub_4A4160(a2, v13, 0, v17, 0) )
          break;
        v18 = v51;
        v19 = *v51 - 1;
        v20 = *v51 == 1;
        *v51 = v19;
        if ( v19 < 0 || v20 )
        {
          v29 = *((_QWORD *)v18 + 3);
          if ( v29 && *(_QWORD *)(v29 + 8) )
          {
            sub_47B120(v18);
          }
          else
          {
            v30 = *((__int64 **)v18 + 1);
            if ( v30 && v30 != off_656088 )
            {
              Tcl_Free((__int64)v30);
              v18 = v51;
            }
            v18[4] = -1;
            sub_496830(v18);
          }
          v18 = v51;
        }
        if ( !sub_4A4160(a2, v14, 0, v18, 0) )
        {
          sub_48B350(a2);
          v44 = *(_QWORD *)(v14 + 8);
          if ( !v44 )
            LODWORD(v44) = sub_47B3B0(v14);
          v16 = 1;
          sub_48B710(a2, (unsigned int)"couldn't set value variable: \"", v44, (unsigned int)"\"", 0, v43);
          goto LABEL_19;
        }
        v21 = sub_40B720(a2, v12, 0, *(_QWORD **)(a2 + 952), 3u);
        v16 = v21;
        if ( v21 == 4 )
        {
          LOBYTE(v16) = 0;
        }
        else if ( v21 )
        {
          if ( v21 == 3 )
          {
            v16 = 0;
          }
          else if ( v21 == 1 )
          {
            v45 = sub_48F930(
                    (unsigned int)"\n    (\"dict for\" body line %d)",
                    *(_DWORD *)(a2 + 16),
                    v22,
                    v23,
                    v24,
                    v25);
            sub_40ABA0(a2, v45, v46, v47, v48, v49);
          }
          goto LABEL_19;
        }
        sub_440A10((__int64)v55, &v50, &v51, &v52, v24, v25);
        if ( v52 )
          goto LABEL_19;
      }
      sub_48B350(a2);
      v38 = *(_QWORD *)(v13 + 8);
      if ( !v38 )
        LODWORD(v38) = sub_47B3B0(v13);
      sub_48B710(a2, (unsigned int)"couldn't set key variable: \"", v38, (unsigned int)"\"", 0, v37);
      v39 = v51;
      v40 = *v51 - 1;
      v20 = *v51 == 1;
      *v51 = v40;
      if ( v40 < 0 || v20 )
      {
        v41 = *((_QWORD *)v39 + 3);
        if ( v41 && *(_QWORD *)(v41 + 8) )
        {
          v16 = 1;
          sub_47B120(v39);
        }
        else
        {
          v42 = *((__int64 **)v39 + 1);
          if ( v42 && v42 != off_656088 )
          {
            Tcl_Free((__int64)v42);
            v39 = v51;
          }
          v39[4] = -1;
          v16 = 1;
          sub_496830(v39);
        }
      }
      else
      {
        v16 = 1;
      }
    }
LABEL_19:
    v26 = *(_DWORD *)v13 - 1;
    v20 = *(_DWORD *)v13 == 1;
    *(_DWORD *)v13 = v26;
    if ( v26 < 0 || v20 )
    {
      v35 = *(_QWORD *)(v13 + 24);
      if ( v35 && *(_QWORD *)(v35 + 8) )
      {
        sub_47B120(v13);
      }
      else
      {
        v36 = *(__int64 **)(v13 + 8);
        if ( v36 && v36 != off_656088 )
          Tcl_Free((__int64)v36);
        *(_DWORD *)(v13 + 16) = -1;
        sub_496830(v13);
      }
    }
    v27 = *(_DWORD *)v14 - 1;
    v20 = *(_DWORD *)v14 == 1;
    *(_DWORD *)v14 = v27;
    if ( v27 < 0 || v20 )
    {
      v33 = *(_QWORD *)(v14 + 24);
      if ( v33 && *(_QWORD *)(v33 + 8) )
      {
        sub_47B120(v14);
      }
      else
      {
        v34 = *(__int64 **)(v14 + 8);
        if ( v34 && v34 != off_656088 )
          Tcl_Free((__int64)v34);
        *(_DWORD *)(v14 + 16) = -1;
        sub_496830(v14);
      }
    }
    v28 = *(_DWORD *)v12 - 1;
    v20 = *(_DWORD *)v12 == 1;
    *(_DWORD *)v12 = v28;
    if ( v28 < 0 || v20 )
    {
      v31 = *(_QWORD *)(v12 + 24);
      if ( v31 && *(_QWORD *)(v31 + 8) )
      {
        sub_47B120(v12);
      }
      else
      {
        v32 = *(__int64 **)(v12 + 8);
        if ( v32 && v32 != off_656088 )
          Tcl_Free((__int64)v32);
        *(_DWORD *)(v12 + 16) = -1;
        sub_496830(v12);
      }
    }
    sub_4409E0((__int64)v55);
    if ( v16 )
    {
      return v16;
    }
    else
    {
      sub_48B350(a2);
      return 0;
    }
  }
  return v6;
}

