__int64 __fastcall sub_30090(
        __int64 a1,
        __int64 *a2,
        int a3,
        void *a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v12; // rax
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rbp
  __int64 v17; // rcx
  unsigned int v18; // ebx
  __int64 v19; // r8
  __int64 v20; // r9
  __m128 v21; // xmm4
  __m128 v22; // xmm5
  size_t v23; // r15
  __int64 (__fastcall **v25)(); // [rsp+0h] [rbp-58h] BYREF
  unsigned __int8 v26; // [rsp+8h] [rbp-50h]
  int v27; // [rsp+Ch] [rbp-4Ch]
  int v28; // [rsp+10h] [rbp-48h]
  unsigned __int64 v29; // [rsp+18h] [rbp-40h]

  v12 = *a2;
  v29 = __readfsqword(0x28u);
  v27 = a3;
  v26 = 95;
  v28 = v12;
  v25 = off_1623D8;
  if ( (unsigned int)sub_2F850(a1, (unsigned __int8 *)&v25)
    || *(_DWORD *)(a1 + 248) == 1
    && (sub_2F850(a1, (unsigned __int8 *)&v25), (unsigned int)sub_2F850(a1, (unsigned __int8 *)&v25)) )
  {
    v16 = 0;
  }
  else
  {
    v16 = sub_2F5D0(a1, v26, 0);
  }
  v18 = sub_2A6A0((_QWORD *)a1, v16, 96, (_BYTE *)(a1 + 288), v14, v15);
  if ( !v18 )
  {
    v23 = *(_QWORD *)(v16 + 24);
    if ( *a2 < v23 )
      sub_16B60(
        (int)"warning: READ_FILE: client sent more bytes (%zu) than was requested (%zu)\n",
        *(_QWORD *)(v16 + 24),
        *a2,
        v17,
        v19,
        v20,
        a5,
        a6,
        a7,
        a8,
        v21,
        v22,
        a11,
        a12,
        (char)v25);
    memcpy(a4, *(const void **)(v16 + 16), v23);
    *a2 = v23;
  }
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
  nullsub_27(&v25);
  return v18;
}

