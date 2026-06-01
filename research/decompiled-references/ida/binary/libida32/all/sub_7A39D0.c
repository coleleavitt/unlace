void __fastcall __noreturn sub_7A39D0(const char **a1)
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
  const char *v24; // rdi
  int v25; // r8d
  int v26; // [rsp+0h] [rbp-5D8h]
  void *v27; // [rsp+10h] [rbp-5C8h] BYREF
  int v28[4]; // [rsp+18h] [rbp-5C0h]
  void *v29; // [rsp+28h] [rbp-5B0h]
  void *v30; // [rsp+30h] [rbp-5A8h] BYREF
  int v31[4]; // [rsp+38h] [rbp-5A0h]
  __int64 v32; // [rsp+48h] [rbp-590h]
  void *ptr; // [rsp+50h] [rbp-588h] BYREF
  int v34[4]; // [rsp+58h] [rbp-580h]
  int v35; // [rsp+68h] [rbp-570h]
  __int64 v36; // [rsp+70h] [rbp-568h] BYREF
  __int64 v37; // [rsp+78h] [rbp-560h]
  void *v38; // [rsp+80h] [rbp-558h]
  int v39; // [rsp+88h] [rbp-550h]
  int v40[2]; // [rsp+90h] [rbp-548h] BYREF
  int v41; // [rsp+98h] [rbp-540h]
  __int16 v42; // [rsp+9Ch] [rbp-53Ch]
  _BYTE v43[74]; // [rsp+9Eh] [rbp-53Ah] BYREF
  int v44[2]; // [rsp+E8h] [rbp-4F0h]
  __int64 v45; // [rsp+F0h] [rbp-4E8h]
  int v46[2]; // [rsp+100h] [rbp-4D8h] BYREF
  const char *v47; // [rsp+108h] [rbp-4D0h]
  const char *v48; // [rsp+110h] [rbp-4C8h]
  const char *v49; // [rsp+118h] [rbp-4C0h]
  const char *v50; // [rsp+120h] [rbp-4B8h]
  const char *v51; // [rsp+128h] [rbp-4B0h]
  char *v52; // [rsp+130h] [rbp-4A8h]
  const char *v53; // [rsp+138h] [rbp-4A0h]
  char *v54; // [rsp+140h] [rbp-498h]
  const char *v55; // [rsp+148h] [rbp-490h]
  char *v56; // [rsp+150h] [rbp-488h]
  char *v57; // [rsp+158h] [rbp-480h]
  char *v58; // [rsp+160h] [rbp-478h]
  const char *v59; // [rsp+168h] [rbp-470h]
  const char *v60; // [rsp+170h] [rbp-468h]
  const char *v61; // [rsp+178h] [rbp-460h]
  __int64 v62; // [rsp+180h] [rbp-458h]
  __int64 v63; // [rsp+188h] [rbp-450h]
  _BYTE v64[1032]; // [rsp+190h] [rbp-448h] BYREF
  unsigned __int64 v65; // [rsp+598h] [rbp-40h]

  v1 = qword_2CAA7D0;
  v65 = __readfsqword(0x28u);
  qmutex_lock(qword_2CAA7D0);
  byte_2CAA7D8 = 1;
  qmutex_unlock(v1);
  v2 = a1[10] == nullptr;
  v59 = nullptr;
  *(_QWORD *)v46 = "email";
  v48 = "subject";
  v50 = "lid";
  v52 = "user";
  v54 = "desc";
  v56 = "auto";
  v58 = "mac";
  v60 = "submit";
  v61 = "send";
  v3 = haystack;
  v62 = 0;
  v63 = 0;
  if ( !v2 )
    v3 = a1[9];
  v2 = a1[22] == nullptr;
  v47 = v3;
  v4 = haystack;
  if ( !v2 )
    v4 = a1[21];
  v2 = a1[1] == nullptr;
  v49 = v4;
  v5 = haystack;
  if ( !v2 )
    v5 = *a1;
  v2 = a1[19] == nullptr;
  v51 = v5;
  v6 = haystack;
  if ( !v2 )
    v6 = a1[18];
  v2 = a1[25] == nullptr;
  v53 = v6;
  v7 = haystack;
  if ( !v2 )
    v7 = a1[24];
  v55 = v7;
  v8 = "1";
  v9 = (_DWORD)a1[27] & 0xF;
  if ( v9 != 1 )
  {
    v8 = "0";
    if ( v9 == 2 )
      v8 = "2";
  }
  v57 = v8;
  v27 = nullptr;
  *(_OWORD *)v28 = 0;
  if ( (unsigned __int8)get_mac_addresses(&v27, 0) )
  {
    v10 = haystack;
    if ( *((_QWORD *)v27 + 1) )
      v10 = *(const char **)v27;
    v59 = v10;
  }
  *(_OWORD *)v31 = 0;
  v30 = nullptr;
  v30 = (void *)qvector_reserve(&v30, 0, 17, 1);
  *(_QWORD *)v31 = 17;
  *(__m128i *)v30 = _mm_load_si128((const __m128i *)&xmmword_2384440);
  ptr = nullptr;
  *((_BYTE *)v30 + 16) = 0;
  *(_OWORD *)v34 = 0;
  v11 = (__m128i *)qvector_reserve(&ptr, 0, 20, 1);
  ptr = v11;
  v14 = "FILE1";
  *(_QWORD *)v34 = 20;
  *v11 = _mm_load_si128((const __m128i *)&xmmword_2384450);
  *(__int32 *)((char *)&v11->m128i_i32[3] + 3) = 1768383278;
  v15 = (const char *)ptr;
  v2 = *(_QWORD *)v31 == 0;
  v42 = -1;
  v16 = haystack;
  *((_BYTE *)ptr + 19) = 0;
  *(_QWORD *)v40 = 104;
  memset(&v43[32], 0, 42);
  *(_QWORD *)&v43[34] = "FILE1";
  v45 = 1024;
  memset(v43, 0, 32);
  if ( !v2 )
    v16 = (const char *)v30;
  *(_QWORD *)&v43[2] = v16;
  if ( !*(_QWORD *)v34 )
    v15 = haystack;
  v17 = *((_DWORD *)a1 + 54);
  *(_QWORD *)&v43[10] = v15;
  *(_QWORD *)&v43[26] = v46;
  v18 = (unsigned __int64)a1[13];
  v19 = v17 & 0x10;
  *(_QWORD *)v44 = v64;
  v41 = v19 == 0 ? 2 : 34;
  if ( v18 > 1 )
  {
    v20 = (unsigned __int64)a1[16] <= 1;
    *(_QWORD *)&v43[42] = a1[12];
    if ( v20 )
      path = get_path(1);
    else
      path = (__int64)a1[15];
    *(_QWORD *)&v43[50] = path;
  }
  v22 = haystack;
  if ( a1[4] )
    v22 = a1[3];
  v2 = a1[7] == nullptr;
  *(_QWORD *)&v43[58] = v22;
  v23 = haystack;
  if ( !v2 )
    v23 = a1[6];
  *(_QWORD *)&v43[66] = v23;
  v64[0] = 0;
  if ( !v19 )
  {
    v24 = "Submitting the report";
    if ( v18 >= 2 )
      v24 = "Sending the database";
    sub_395C70((int)v24);
  }
  v25 = http_request(
          (int)v40,
          0,
          (int)v16,
          (int)v14,
          v12,
          v13,
          v26,
          &v36,
          (__int64)v27,
          v28[0],
          v28[2],
          v29,
          (__int64)v30,
          v31[0],
          v31[2],
          v32,
          (int)ptr,
          v34[0],
          v34[2],
          v35,
          v36,
          v37,
          (int)v38,
          v39,
          v40[0],
          v41,
          *(int *)&v43[2],
          *(int *)&v43[10],
          *(int *)&v43[18],
          *(int *)&v43[26],
          *(int *)&v43[34],
          *(int *)&v43[42],
          *(int *)&v43[50],
          *(int *)&v43[58],
          *(int *)&v43[66],
          v44[0],
          v45);
  if ( v25 <= 0 || !stristr(v64, "successfully uploaded") && !stristr(v64, "thank you") )
    sub_365330();
  sub_365330();
}

