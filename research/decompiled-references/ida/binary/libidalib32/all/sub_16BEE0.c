__int64 __fastcall sub_16BEE0(__int64 a1, int *a2)
{
  _QWORD *v2; // rbp
  int v3; // eax
  __int64 v4; // rbx
  __int64 v5; // r12
  __int64 v6; // rax
  __int16 v7; // r12
  int v8; // eax
  __m128i v9; // xmm0
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int8 *v14; // rdi
  __int64 v16; // rdi
  _QWORD *v17; // rax
  __int64 v18; // r12
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int8 *v23; // rdi
  struct _Unwind_Exception *v24; // rbx
  __m128i v25; // [rsp+0h] [rbp-88h] BYREF
  __int64 v26; // [rsp+10h] [rbp-78h]
  __m128i v27; // [rsp+20h] [rbp-68h] BYREF
  __m128i v28; // [rsp+30h] [rbp-58h]
  int v29; // [rsp+40h] [rbp-48h]
  _QWORD *v30; // [rsp+48h] [rbp-40h]
  unsigned __int64 v31; // [rsp+58h] [rbp-30h]

  v3 = *a2;
  v31 = __readfsqword(0x28u);
  v4 = a1;
  if ( v3 == 4 )
  {
    v17 = *((_QWORD **)a2 + 1);
    if ( !v17 )
      return v31 - __readfsqword(0x28u);
    if ( *v17 >= v17[1] )
      return v31 - __readfsqword(0x28u);
    v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a1 + 648LL))(a1, *v17, 0, 0);
    if ( !v18 )
      return v31 - __readfsqword(0x28u);
    a1 = *(_QWORD *)(a1 + 480);
    if ( a1 )
    {
      v19 = *(_DWORD *)(v4 + 472);
      v27 = _mm_loadu_si128((const __m128i *)(v4 + 440));
      v29 = v19;
      v20 = *(_QWORD *)a1;
      v28 = _mm_loadu_si128((const __m128i *)(v4 + 456));
      if ( (*(__int64 (__fastcall **)(__int64))(v20 + 16))(a1) )
        qfree();
      v2 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      sub_FB9D0(&v25, *(_QWORD *)(v4 + 848));
      a1 = v4;
      v30 = v2;
      v28.m128i_i16[7] = v26 / 2;
      sub_16BD30(v4, &v27, 0, 0, v21, v22);
      if ( *(_BYTE *)(v4 + 984) )
      {
        if ( !*(_QWORD *)(v4 + 480) )
        {
LABEL_50:
          sub_1582F0(a1);
          goto LABEL_51;
        }
        v23 = nullptr;
        if ( *(_DWORD *)(v4 + 472) == 1 )
          v23 = *(unsigned __int8 **)(v4 + 848);
      }
      else
      {
        v23 = nullptr;
      }
      sub_91990(v23);
      if ( v2 )
        qfree();
      goto LABEL_18;
    }
LABEL_49:
    sub_1582F0(a1);
    goto LABEL_50;
  }
  if ( v3 != 5 )
  {
    if ( v3 != 1 )
      return v31 - __readfsqword(0x28u);
    v5 = *((_QWORD *)a2 + 1);
    v2 = *(_QWORD **)(v5 + 8);
    sub_FB9D0(&v25, *(_QWORD *)(a1 + 848));
    if ( v26 <= 0 )
      return v31 - __readfsqword(0x28u);
    LODWORD(v6) = *(_DWORD *)v5;
    if ( *(_DWORD *)v5 == -2 )
    {
      v6 = v26 >> 1;
    }
    else
    {
      if ( (int)v6 < -1 )
      {
        v7 = 0;
        if ( (unsigned int)(v6 + 4) <= 1 )
          goto LABEL_8;
LABEL_42:
        v7 = 0;
        if ( (int)v6 >= 0 )
          v7 = v6;
LABEL_8:
        a1 = *(_QWORD *)(a1 + 480);
        if ( a1 )
        {
          v8 = *(_DWORD *)(v4 + 472);
          v27 = _mm_loadu_si128((const __m128i *)(v4 + 440));
          v9 = _mm_loadu_si128((const __m128i *)(v4 + 456));
          v29 = v8;
          v10 = *(_QWORD *)a1;
          v28 = v9;
          v11 = (*(__int64 (__fastcall **)(__int64))(v10 + 16))(a1);
          v2 = (_QWORD *)v2[1];
          if ( v11 )
            qfree();
          if ( v2 )
            v2 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
          a1 = v4;
          v28.m128i_i16[7] = v7;
          v30 = v2;
          sub_16BD30(v4, &v27, 0, 0, v12, v13);
          if ( !*(_BYTE *)(v4 + 984) )
          {
            v14 = nullptr;
            goto LABEL_17;
          }
          if ( *(_QWORD *)(v4 + 480) )
          {
            v14 = nullptr;
            if ( *(_DWORD *)(v4 + 472) == 1 )
              v14 = *(unsigned __int8 **)(v4 + 848);
LABEL_17:
            sub_91990(v14);
            if ( !v2 )
              return v31 - __readfsqword(0x28u);
LABEL_18:
            qfree();
            return v31 - __readfsqword(0x28u);
          }
LABEL_51:
          v24 = (struct _Unwind_Exception *)sub_1582F0(a1);
          if ( v2 )
            qfree();
          qfree();
          _Unwind_Resume(v24);
        }
        goto LABEL_48;
      }
      if ( (_DWORD)v6 == -1 )
        LODWORD(v6) = v26 - 1;
    }
    v7 = v26 - 1;
    if ( (int)v6 >= v26 )
      goto LABEL_8;
    goto LABEL_42;
  }
  if ( *(_BYTE *)(a1 + 984) )
  {
    if ( !*(_QWORD *)(a1 + 480) )
    {
LABEL_48:
      sub_1582F0(a1);
      goto LABEL_49;
    }
    v16 = 0;
    if ( *(_DWORD *)(v4 + 472) == 1 )
      v16 = *(_QWORD *)(v4 + 848);
  }
  else
  {
    v16 = 0;
  }
  return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v16 + 72LL))(v16, 0, 0);
}

