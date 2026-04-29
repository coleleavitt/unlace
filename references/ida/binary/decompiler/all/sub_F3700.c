__int64 __fastcall sub_F3700(_QWORD *a1, __int64 *a2, __int64 a3, _QWORD *a4)
{
  __int64 v7; // rsi
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rbx
  _DWORD *v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // rcx
  int v19; // ebp
  signed int v20; // edi
  int v21; // eax
  int v22; // ecx
  int v23; // r15d
  __int64 v24; // rax
  __int64 *v25; // r13
  __int64 v26; // r15
  __int64 v27; // rax
  __int64 v28; // rdx
  _DWORD *v29; // rax
  __int64 v30; // rbp
  _DWORD *v31; // [rsp+0h] [rbp-128h]
  __int64 v32; // [rsp+8h] [rbp-120h]
  __int64 v33; // [rsp+8h] [rbp-120h]
  __int64 v34; // [rsp+10h] [rbp-118h]
  __int64 v35; // [rsp+10h] [rbp-118h]
  __int64 v36; // [rsp+18h] [rbp-110h]
  char v37[8]; // [rsp+28h] [rbp-100h] BYREF
  __int64 v38; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v39; // [rsp+38h] [rbp-F0h]
  __int64 v40; // [rsp+40h] [rbp-E8h] BYREF
  __int128 v41; // [rsp+48h] [rbp-E0h]
  char v42[8]; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v43; // [rsp+68h] [rbp-C0h]
  __int64 v44; // [rsp+70h] [rbp-B8h]
  __int64 v45; // [rsp+80h] [rbp-A8h]
  __int64 v46; // [rsp+88h] [rbp-A0h]
  _QWORD v47[3]; // [rsp+B8h] [rbp-70h] BYREF
  _QWORD v48[11]; // [rsp+D0h] [rbp-58h] BYREF

  v7 = a1[187];
  v48[3] = __readfsqword(0x28u);
  sub_D6330((__int64)v42, v7, 0xB0u);
  v9 = a1[188];
  v40 = 0;
  v41 = 0;
  sub_F3430(a2, &v40, v9, v47, a4, 0);
  sub_F3430(a2, &v40, a1[188], v48, a4, 1);
  v10 = a4[3];
  if ( v10 )
  {
    v15 = (_DWORD *)a4[2];
    v16 = a1[180];
    v17 = a1[188];
    v18 = *(_QWORD *)(*(_QWORD *)(a1[187] + 24LL) + 16LL);
    v19 = (v18 & (v15[4 * v10 - 4] + v15[4 * v10 - 2] - v16)) - (v18 & (*v15 - v16));
    v32 = v18 & (*(_QWORD *)v15 - v16);
    if ( v19 == 1 )
    {
      v38 = 17;
      copy_tinfo_t();
      clear_tinfo_t();
    }
    else
    {
      if ( *(_BYTE *)(*(_QWORD *)(v17 + 96) + 148LL) != 2 )
      {
        if ( v19 <= 8 )
        {
          v35 = a1[188];
          sub_328E20(&v38, v17, (unsigned int)v19);
          copy_tinfo_t();
          clear_tinfo_t();
          v17 = v35;
        }
        else
        {
          v20 = *(_DWORD *)(v17 + 80);
          if ( !(v19 % v20) )
          {
            v36 = a1[188];
            sub_328E20(v37, v17, (unsigned int)v20);
            LODWORD(v39) = 0;
            HIDWORD(v39) = v19 / v20;
            v38 = 0;
            copy_tinfo_t();
            create_tinfo();
            clear_tinfo_t();
            clear_tinfo_t();
            v17 = v36;
          }
        }
      }
      v34 = v17;
      v21 = round_down_power2();
      v22 = v21;
      if ( v21 <= 1 )
      {
        v23 = v19 / v21;
      }
      else
      {
        do
        {
          if ( !(v19 % v22) )
          {
            v23 = v19 / v22;
            if ( v19 / v22 > 1 )
              goto LABEL_28;
          }
          v22 >>= 1;
        }
        while ( v22 != 1 );
        v23 = v19;
      }
LABEL_28:
      sub_328E20(v37, v34, (unsigned int)v22);
      LODWORD(v39) = 0;
      HIDWORD(v39) = v23;
      v38 = 0;
      copy_tinfo_t();
      create_tinfo();
      clear_tinfo_t();
      clear_tinfo_t();
    }
    v38 = 0;
    v39 = 0;
    cleanup_argloc();
    LODWORD(v38) = 1;
    v39 = v32;
    if ( !under_debugger )
      sub_37EA20(52855);
    BUG();
  }
  v11 = a2[1];
  if ( a3 && v11 )
  {
    v24 = qalloc_or_throw();
    *(_QWORD *)v24 = 0;
    v25 = (__int64 *)v24;
    *(_OWORD *)(v24 + 8) = 0;
    v26 = v41;
    if ( (_QWORD)v41 )
    {
      v27 = qalloc_or_throw();
      *v25 = v27;
      v28 = 0;
      v25[2] = v26;
      while ( 1 )
      {
        v33 = v28;
        v29 = (_DWORD *)(24 * v28 + v27);
        v30 = v40 + 24 * v28;
        *v29 = 0;
        v31 = v29;
        copy_argloc();
        v28 = v33 + 1;
        v31[4] = *(_DWORD *)(v30 + 16);
        if ( v26 == v33 + 1 )
          break;
        v27 = *v25;
      }
      v25[1] = v26;
    }
    cleanup_argloc();
    if ( v25 )
    {
      *(_DWORD *)a3 = 2;
      *(_QWORD *)(a3 + 8) = v25;
    }
    v11 = a2[1];
  }
  LOBYTE(a3) = v11 != 0;
  if ( v40 )
  {
    v12 = v41;
    if ( (_QWORD)v41 )
    {
      v13 = 0;
      do
      {
        ++v13;
        cleanup_argloc();
      }
      while ( v12 != v13 );
    }
    *(_QWORD *)&v41 = 0;
    qfree();
  }
  if ( v48[0] )
  {
    v48[1] = 0;
    qfree();
  }
  if ( v47[0] )
  {
    v47[1] = 0;
    qfree();
  }
  if ( v45 )
  {
    v46 = 0;
    qfree();
  }
  if ( v43 )
  {
    v44 = 0;
    qfree();
  }
  return (unsigned int)a3;
}
