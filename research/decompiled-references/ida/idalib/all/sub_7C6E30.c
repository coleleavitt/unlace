void __fastcall __noreturn sub_7C6E30(const char **a1)
{
  __int64 v1; // rbp
  bool v2; // zf
  const char *v3; // rax
  const char *v4; // rax
  const char *v5; // rax
  const char *v6; // rax
  const char *v7; // rax
  char *v8; // rdx
  int v9; // eax
  const char *v10; // rax
  __m128i *v11; // rax
  int v12; // r8d
  int v13; // r9d
  const char *v14; // rcx
  const char *v15; // rax
  const char *v16; // rdx
  int v17; // ebp
  unsigned __int64 v18; // r13
  int v19; // ebp
  bool v20; // cc
  __int64 path; // rax
  const char *v22; // rax
  const char *v23; // rax
  int v24; // r8d
  int v25; // [rsp+0h] [rbp-5D8h]
  void *v26; // [rsp+10h] [rbp-5C8h] BYREF
  int v27[4]; // [rsp+18h] [rbp-5C0h]
  void *v28; // [rsp+28h] [rbp-5B0h]
  void *v29; // [rsp+30h] [rbp-5A8h] BYREF
  int v30[4]; // [rsp+38h] [rbp-5A0h]
  __int64 v31; // [rsp+48h] [rbp-590h]
  void *ptr; // [rsp+50h] [rbp-588h] BYREF
  int v33[4]; // [rsp+58h] [rbp-580h]
  int v34; // [rsp+68h] [rbp-570h]
  __int64 v35; // [rsp+70h] [rbp-568h] BYREF
  __int64 v36; // [rsp+78h] [rbp-560h]
  void *v37; // [rsp+80h] [rbp-558h]
  int v38; // [rsp+88h] [rbp-550h]
  int v39[2]; // [rsp+90h] [rbp-548h] BYREF
  int v40; // [rsp+98h] [rbp-540h]
  __int16 v41; // [rsp+9Ch] [rbp-53Ch]
  _BYTE v42[74]; // [rsp+9Eh] [rbp-53Ah] BYREF
  int v43[2]; // [rsp+E8h] [rbp-4F0h]
  __int64 v44; // [rsp+F0h] [rbp-4E8h]
  int v45[2]; // [rsp+100h] [rbp-4D8h] BYREF
  const char *v46; // [rsp+108h] [rbp-4D0h]
  const char *v47; // [rsp+110h] [rbp-4C8h]
  const char *v48; // [rsp+118h] [rbp-4C0h]
  const char *v49; // [rsp+120h] [rbp-4B8h]
  const char *v50; // [rsp+128h] [rbp-4B0h]
  char *v51; // [rsp+130h] [rbp-4A8h]
  const char *v52; // [rsp+138h] [rbp-4A0h]
  char *v53; // [rsp+140h] [rbp-498h]
  const char *v54; // [rsp+148h] [rbp-490h]
  char *v55; // [rsp+150h] [rbp-488h]
  char *v56; // [rsp+158h] [rbp-480h]
  char *v57; // [rsp+160h] [rbp-478h]
  const char *v58; // [rsp+168h] [rbp-470h]
  const char *v59; // [rsp+170h] [rbp-468h]
  const char *v60; // [rsp+178h] [rbp-460h]
  __int64 v61; // [rsp+180h] [rbp-458h]
  __int64 v62; // [rsp+188h] [rbp-450h]
  _BYTE v63[1032]; // [rsp+190h] [rbp-448h] BYREF
  unsigned __int64 v64; // [rsp+598h] [rbp-40h]

  v1 = qword_2CD46F0;
  v64 = __readfsqword(0x28u);
  qmutex_lock(qword_2CD46F0);
  byte_2CD46F8 = 1;
  qmutex_unlock(v1);
  v2 = a1[10] == nullptr;
  v58 = nullptr;
  *(_QWORD *)v45 = "email";
  v47 = "subject";
  v49 = "lid";
  v51 = "user";
  v53 = "desc";
  v55 = "auto";
  v57 = "mac";
  v59 = "submit";
  v60 = "send";
  v3 = haystack;
  v61 = 0;
  v62 = 0;
  if ( !v2 )
    v3 = a1[9];
  v2 = a1[22] == nullptr;
  v46 = v3;
  v4 = haystack;
  if ( !v2 )
    v4 = a1[21];
  v2 = a1[1] == nullptr;
  v48 = v4;
  v5 = haystack;
  if ( !v2 )
    v5 = *a1;
  v2 = a1[19] == nullptr;
  v50 = v5;
  v6 = haystack;
  if ( !v2 )
    v6 = a1[18];
  v2 = a1[25] == nullptr;
  v52 = v6;
  v7 = haystack;
  if ( !v2 )
    v7 = a1[24];
  v54 = v7;
  v8 = "1";
  v9 = (_DWORD)a1[27] & 0xF;
  if ( v9 != 1 )
  {
    v8 = "0";
    if ( v9 == 2 )
      v8 = "2";
  }
  v56 = v8;
  v26 = nullptr;
  *(_OWORD *)v27 = 0;
  if ( (unsigned __int8)get_mac_addresses(&v26, 0) )
  {
    v10 = haystack;
    if ( *((_QWORD *)v26 + 1) )
      v10 = *(const char **)v26;
    v58 = v10;
  }
  *(_OWORD *)v30 = 0;
  v29 = nullptr;
  v29 = (void *)qvector_reserve(&v29, 0, 17, 1);
  *(_QWORD *)v30 = 17;
  *(__m128i *)v29 = _mm_load_si128((const __m128i *)&xmmword_23A8470);
  ptr = nullptr;
  *((_BYTE *)v29 + 16) = 0;
  *(_OWORD *)v33 = 0;
  v11 = (__m128i *)qvector_reserve(&ptr, 0, 20, 1);
  ptr = v11;
  v14 = "FILE1";
  *(_QWORD *)v33 = 20;
  *v11 = _mm_load_si128((const __m128i *)&xmmword_23A8480);
  *(__int32 *)((char *)&v11->m128i_i32[3] + 3) = 1768383278;
  v15 = (const char *)ptr;
  v2 = *(_QWORD *)v30 == 0;
  v41 = -1;
  v16 = haystack;
  *((_BYTE *)ptr + 19) = 0;
  *(_QWORD *)v39 = 104;
  memset(&v42[32], 0, 42);
  *(_QWORD *)&v42[34] = "FILE1";
  v44 = 1024;
  memset(v42, 0, 32);
  if ( !v2 )
    v16 = (const char *)v29;
  *(_QWORD *)&v42[2] = v16;
  if ( !*(_QWORD *)v33 )
    v15 = haystack;
  v17 = *((_DWORD *)a1 + 54);
  *(_QWORD *)&v42[10] = v15;
  *(_QWORD *)&v42[26] = v45;
  v18 = (unsigned __int64)a1[13];
  v19 = v17 & 0x10;
  *(_QWORD *)v43 = v63;
  v40 = v19 == 0 ? 2 : 34;
  if ( v18 > 1 )
  {
    v20 = (unsigned __int64)a1[16] <= 1;
    *(_QWORD *)&v42[42] = a1[12];
    if ( v20 )
      path = get_path(1);
    else
      path = (__int64)a1[15];
    *(_QWORD *)&v42[50] = path;
  }
  v22 = haystack;
  if ( a1[4] )
    v22 = a1[3];
  v2 = a1[7] == nullptr;
  *(_QWORD *)&v42[58] = v22;
  v23 = haystack;
  if ( !v2 )
    v23 = a1[6];
  *(_QWORD *)&v42[66] = v23;
  v63[0] = 0;
  if ( !v19 )
    sub_387AC0();
  v24 = http_request(
          (int)v39,
          0,
          (int)v16,
          (int)v14,
          v12,
          v13,
          v25,
          &v35,
          (__int64)v26,
          v27[0],
          v27[2],
          v28,
          (__int64)v29,
          v30[0],
          v30[2],
          v31,
          (int)ptr,
          v33[0],
          v33[2],
          v34,
          v35,
          v36,
          (int)v37,
          v38,
          v39[0],
          v40,
          *(int *)&v42[2],
          *(int *)&v42[10],
          *(int *)&v42[18],
          *(int *)&v42[26],
          *(int *)&v42[34],
          *(int *)&v42[42],
          *(int *)&v42[50],
          *(int *)&v42[58],
          *(int *)&v42[66],
          v43[0],
          v44);
  if ( v24 <= 0 || !stristr(v63, "successfully uploaded") && !stristr(v63, "thank you") )
    sub_368890();
  sub_368890();
}
