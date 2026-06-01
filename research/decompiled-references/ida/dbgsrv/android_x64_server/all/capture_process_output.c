/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: capture_process_output
// Address: 0x00000000000C8280

//----- (00000000000C8280) ----------------------------------------------------
__int64 __fastcall capture_process_output(__int64 a1, __int128 *a2, __m128i *a3, int a4, __int64 a5)
{
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  void *v12; // rdi
  int v13; // eax
  char *v14; // rax
  unsigned int v15; // ebx
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm3
  __int64 v19; // r14
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  int v25; // eax
  int v26; // eax
  const char *v27; // rbp
  char *v28; // rax
  int v30; // [rsp+Ch] [rbp-DCh] BYREF
  __int128 v31; // [rsp+10h] [rbp-D8h] BYREF
  __int128 v32; // [rsp+20h] [rbp-C8h]
  __int128 v33; // [rsp+30h] [rbp-B8h]
  __int128 v34; // [rsp+40h] [rbp-A8h]
  __int128 v35; // [rsp+50h] [rbp-98h]
  int v36; // [rsp+60h] [rbp-88h] BYREF
  __int64 v37; // [rsp+68h] [rbp-80h]
  unsigned __int64 v38; // [rsp+70h] [rbp-78h]
  int v39; // [rsp+78h] [rbp-70h]
  _UNKNOWN **v40; // [rsp+80h] [rbp-68h] BYREF
  __int128 v41; // [rsp+88h] [rbp-60h]
  int *v42; // [rsp+98h] [rbp-50h]
  __int64 v43; // [rsp+A0h] [rbp-48h]
  __int64 v44; // [rsp+A8h] [rbp-40h]
  unsigned __int64 v45; // [rsp+B0h] [rbp-38h]

  v45 = __readfsqword(0x28u);
  v36 = a4;
  v9 = qtime64();
  v37 = 1000000 * HIDWORD(v9) + (unsigned int)v9;
  if ( a4 < 0 )
    v10 = 0;
  else
    v10 = 1000 * a4 + 1000000 * HIDWORD(v9) + (unsigned int)v9;
  v38 = v10;
  v11 = -a4;
  if ( a4 > -2 )
    v11 = a4;
  v39 = v11;
  if ( a3 )
  {
    v12 = (void *)a3->m128i_i64[0];
    if ( a3->m128i_i64[0] )
    {
      a3->m128i_i64[1] = 0;
      qfree(v12);
      a3->m128i_i64[0] = 0;
      a3[1].m128i_i64[0] = 0;
    }
  }
  v41 = 0;
  v42 = nullptr;
  v40 = &off_150740;
  v43 = a1;
  v44 = a5;
  v13 = sub_CD040((__int64)&v40, 2 - (unsigned int)(a5 == 0));
  if ( v13 )
  {
    v14 = winerr(v13);
    v15 = 0;
    sub_C8630((__int64)a3, "Could not create pipe: %s", v14);
    goto LABEL_31;
  }
  v16 = *a2;
  v17 = a2[1];
  v18 = a2[3];
  v33 = a2[2];
  v35 = a2[4];
  v34 = v18;
  v32 = v17;
  v31 = v16;
  *(_QWORD *)&v33 = -1;
  *((_QWORD *)&v33 + 1) = *v42;
  *(_QWORD *)&v34 = v42[a5 != 0];
  v19 = launch_process((__int64)&v31, a3);
  sub_CD500((__int64)&v40);
  if ( !v19 )
  {
LABEL_30:
    v15 = 0;
    goto LABEL_31;
  }
  if ( a4 >= 0 )
  {
    v20 = qtime64();
    v21 = 1000000 * HIDWORD(v20);
    v15 = -1;
    if ( v21 + (unsigned __int64)(unsigned int)v20 + 10 >= v38 )
      goto LABEL_16;
    v39 = (v38 + 999 - ((unsigned int)v20 + v21)) / 0x3E8;
  }
  v15 = sub_CC980((unsigned __int64 *)&v40, (__int64)a3, (__int64)&v36, &stru_3F0.st_size);
LABEL_16:
  sub_CD200((__int64)&v40);
  if ( v15 == -1 )
    goto LABEL_20;
  if ( v36 >= 0 )
  {
    v22 = qtime64();
    v23 = 1000000 * HIDWORD(v22);
    if ( v23 + (unsigned __int64)(unsigned int)v22 + 10 < v38 )
    {
      v24 = (v38 + 999 - ((unsigned int)v22 + v23)) / 0x3E8;
      v39 = v24;
      goto LABEL_22;
    }
LABEL_20:
    sub_C8630((__int64)a3, "Timed out capturing the process output");
    goto LABEL_28;
  }
  LODWORD(v24) = v39;
LABEL_22:
  v25 = -1;
  if ( a4 >= 0 )
    v25 = v24;
  if ( (unsigned int)check_process_exit(v19, &v30, v25) == -1 )
  {
    sub_C8630((__int64)a3, "Failed to retrieve exit code for %s", (const char *)v32);
LABEL_28:
    v26 = term_process(v19);
    if ( v26 )
    {
      v27 = (const char *)v32;
      v28 = winerr(v26);
      v15 = 0;
      sub_C8630((__int64)a3, "Could not terminate %s: %s", v27, v28);
      goto LABEL_31;
    }
    goto LABEL_30;
  }
  if ( v30 )
  {
    v15 = 0;
    sub_C8630((__int64)a3, "%s exited with error code %d", (const char *)v32, v30);
  }
  else
  {
    LOBYTE(v15) = 1;
  }
LABEL_31:
  v40 = &off_150768;
  sub_CD200((__int64)&v40);
  return v15;
}
// 3F0: using guessed type Elf64_Sym;
// 150740: using guessed type _UNKNOWN *off_150740;
// 150768: using guessed type _UNKNOWN *off_150768;
