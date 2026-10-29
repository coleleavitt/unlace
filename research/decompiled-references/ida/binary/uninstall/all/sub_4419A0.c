__int64 __fastcall sub_4419A0(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  unsigned int v7; // edx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rbp
  int v12; // eax
  int *v13; // rax
  int *v14; // rbx
  int v15; // eax
  bool v16; // zf
  __int64 *v17; // rdi
  __int64 v18; // rax
  _DWORD *v19; // rcx
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // r12
  __int64 v23; // rbx
  int *v24; // rax
  __int64 v25; // rdx
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // rdx
  int v29; // ecx
  int v30; // r8d
  int v31; // r9d
  unsigned int v32; // [rsp+4h] [rbp-64h]
  int *v33; // [rsp+8h] [rbp-60h] BYREF
  _BYTE v34[40]; // [rsp+10h] [rbp-58h] BYREF

  v32 = 0;
  v33 = nullptr;
  if ( (unsigned int)(a3 - 3) <= 1 )
  {
    v9 = a4[1];
    v10 = sub_4A43A0(a2, v9, 0, 0);
    v11 = v10;
    if ( v10 )
    {
      v12 = sub_4406D0(a2, v10, a4[2], &v33);
      v7 = 1;
      if ( v12 )
        return v7;
    }
    else
    {
      v11 = sub_4401E0(a2, v9);
    }
    if ( *(int *)v11 > 1 )
    {
      v22 = *(_QWORD *)(v11 + 8);
      *(_QWORD *)(v11 + 8) = 0;
      v23 = v11;
      v11 = sub_47B2A0(v11);
      *(_QWORD *)(v23 + 8) = v22;
    }
    if ( v33 )
    {
      if ( *v33 > 1 )
      {
        v24 = (int *)sub_47B2A0(v33);
        v25 = a4[2];
        v33 = v24;
        sub_440560(a2, v11, v25, v24, v26, v27);
      }
      if ( a3 == 4 )
      {
        v32 = sub_449770(a2, v33, a4[3]);
      }
      else
      {
        v13 = (int *)sub_47BD00(1);
        ++*v13;
        v14 = v13;
        v32 = sub_449770(a2, v33, v13);
        v15 = *v14 - 1;
        v16 = *v14 == 1;
        *v14 = v15;
        if ( v15 < 0 || v16 )
          sub_47B120(v14);
      }
LABEL_14:
      if ( v32 )
      {
        if ( !*(_DWORD *)v11 )
        {
          *(_DWORD *)v11 = -1;
          sub_47B120(v11);
          return v32;
        }
        return v32;
      }
LABEL_15:
      v17 = *(__int64 **)(v11 + 8);
      if ( v17 )
      {
        if ( v17 != off_656088 )
          Tcl_Free((__int64)v17);
        *(_QWORD *)(v11 + 8) = 0;
      }
      v18 = sub_4A4160(a2, a4[1], 0, v11, 512);
      v33 = (int *)v18;
      if ( v18 )
      {
        sub_48AFD0(a2, v18);
        return v32;
      }
      return 1;
    }
    if ( a3 == 4 )
    {
      v32 = sub_47C9E0(a2, a4[3], v34);
      if ( v32 )
      {
        sub_40BD40(a2, (__int64)"\n    (reading increment)", v28, v29, v30, v31);
        goto LABEL_14;
      }
      sub_4B0400(v34);
      v19 = (_DWORD *)a4[3];
    }
    else
    {
      v19 = (_DWORD *)sub_47BD00(1);
    }
    sub_440560(a2, v11, a4[2], v19, v20, v21);
    goto LABEL_15;
  }
  sub_458930(a2, 1, a4, "varName key ?increment?");
  return 1;
}

