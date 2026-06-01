__int64 __fastcall sub_1003380(_QWORD *a1, __int64 *a2, unsigned int a3, int a4, int a5, unsigned int a6, __m128i a7)
{
  const char *(*v11)(); // rax
  char *v12; // rbp
  size_t v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 v18; // rsi
  unsigned int v19; // ebx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // [rsp-8h] [rbp-60h]
  __int64 v24; // [rsp+0h] [rbp-58h]
  signed __int64 v25; // [rsp+0h] [rbp-58h]
  __int64 v26[8]; // [rsp+18h] [rbp-40h] BYREF

  v11 = *(const char *(**)())(*(_QWORD *)*a2 + 16LL);
  if ( v11 == sub_FA2570 )
  {
    v12 = "Unknown buffer";
    v24 = *a2;
    v13 = j__strlen("Unknown buffer");
    v16 = v24;
    v17 = v13;
  }
  else
  {
    v21 = ((__int64 (__fastcall *)(__int64))v11)(*a2);
    v17 = v22;
    v12 = (char *)v21;
    v16 = *a2;
  }
  *a2 = 0;
  v25 = v17;
  v26[0] = v16;
  v18 = sub_FFEEA0(a1, v26, v16, v17, v14, v15);
  v19 = sub_1002DF0((__int64)a1, v18, v12, v25, a6, a3, a7, a4, a5);
  if ( v26[0] )
    (*(void (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)v26[0] + 8LL))(v26[0], v18, v23);
  return v19;
}

