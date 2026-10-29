__int64 *__fastcall sub_9E74D0(__int64 *a1, unsigned int a2, __int64 a3, __int64 a4, const double *a5)
{
  __m128 v7; // xmm0
  __int64 v8; // r12
  _BYTE *v9; // rdi
  void *v13[2]; // [rsp+1Ch] [rbp-B8h] BYREF
  _BYTE v14[16]; // [rsp+2Ch] [rbp-A8h] BYREF
  _QWORD v15[2]; // [rsp+3Ch] [rbp-98h] BYREF
  __m128 v16; // [rsp+4Ch] [rbp-88h]
  void **v17; // [rsp+5Ch] [rbp-78h] BYREF
  int v18; // [rsp+64h] [rbp-70h]
  __int128 v19; // [rsp+6Ch] [rbp-68h]
  __int64 v20; // [rsp+7Ch] [rbp-58h]
  char v21; // [rsp+84h] [rbp-50h]
  int v22; // [rsp+88h] [rbp-4Ch]
  void **v23; // [rsp+8Ch] [rbp-48h]

  v19 = 0;
  v23 = v13;
  v13[0] = v14;
  v13[1] = nullptr;
  v14[0] = 0;
  v18 = 0;
  v21 = 0;
  v22 = 1;
  v20 = 0;
  v17 = (void **)&off_2BC1EC8;
  sub_2257B70(&v17, 0, 0, 0);
  v15[1] = a4;
  v7 = _mm_loadh_ps(a5);
  v15[0] = off_2BD8AB8;
  v16 = v7;
  sub_2258820(&v17, v15);
  v17 = (void **)&off_2BC1EC8;
  sub_2257A60(&v17);
  v17 = v13;
  LOWORD(v20) = 260;
  v8 = operator new(0x40u);
  sub_21FC850(v8, &v17, a2, a3);
  v9 = v13[0];
  *a1 = v8;
  if ( v9 != v14 )
    operator delete(v9);
  return a1;
}

