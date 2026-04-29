__int64 __fastcall sub_3DFC0(__int64 a1, _BYTE *a2)
{
  _QWORD *v3; // rdi
  __int64 v4; // rdx
  int *v5; // rbp
  __int64 v6; // r15
  void (__fastcall *v7)(__int64, __int64, _BYTE *); // rax
  void (__fastcall *v8)(__int64, _BYTE *); // rax
  void (__fastcall *hexdsp)(__int64, _BYTE *, int *); // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rbp
  __int64 v16; // r13
  unsigned __int64 v17; // rdx
  char *v18; // rbp
  _QWORD *v19; // rdi
  char *v20; // r12
  void (__fastcall *v21)(__int64, char *); // rax
  __int64 v23; // rbp
  __int64 v24; // rax
  _BYTE v25[16]; // [rsp+0h] [rbp-88h] BYREF
  _QWORD v26[2]; // [rsp+10h] [rbp-78h] BYREF
  int v27; // [rsp+20h] [rbp-68h] BYREF
  void *v28; // [rsp+28h] [rbp-60h]
  int *v29; // [rsp+30h] [rbp-58h]
  int *v30; // [rsp+38h] [rbp-50h]
  __int64 v31; // [rsp+40h] [rbp-48h]
  unsigned __int64 v32; // [rsp+48h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  v3 = v26;
  v26[0] = &off_4D8F8;
  v27 = 0;
  v28 = nullptr;
  v29 = &v27;
  v30 = &v27;
  v31 = 0;
  sub_33BF0((__int64)v26, (__int64)a2);
  v4 = v31;
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( !v4 )
  {
    v5 = v29;
    if ( v29 == &v27 )
      goto LABEL_12;
    goto LABEL_5;
  }
  a2 = nullptr;
  v3 = (_QWORD *)a1;
  v24 = qvector_reserve(a1, 0, v4, 16);
  v5 = v29;
  *(_QWORD *)a1 = v24;
  v14 = v24;
  if ( v5 != &v27 )
  {
    do
    {
LABEL_5:
      hexdsp = (void (__fastcall *)(__int64, _BYTE *, int *))get_hexdsp(v3, a2);
      v10 = 273;
      hexdsp(273, v25, v5 + 8);
      v11 = *(_QWORD *)(a1 + 8);
      v12 = *(_QWORD *)a1;
      if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v11 + 1) )
      {
        v10 = a1;
        v13 = qvector_reserve(a1, v12, v11 + 1, 16);
        *(_QWORD *)a1 = v13;
        v12 = v13;
        v11 = *(_QWORD *)(a1 + 8);
      }
      v6 = v12 + 16 * v11;
      v7 = (void (__fastcall *)(__int64, __int64, _BYTE *))get_hexdsp(v10, v12);
      v7(273, v6, v25);
      ++*(_QWORD *)(a1 + 8);
      v8 = (void (__fastcall *)(__int64, _BYTE *))get_hexdsp(273, v6);
      a2 = v25;
      v8(276, v25);
      v3 = v5;
      v5 = (int *)std::_Rb_tree_increment(v5);
    }
    while ( v5 != &v27 );
    v14 = *(_QWORD *)a1;
  }
  v15 = 16LL * *(_QWORD *)(a1 + 8);
  v16 = v14 + v15;
  if ( v14 + v15 != v14 )
  {
    if ( v15 >> 4 )
    {
      _BitScanReverse64(&v17, v15 >> 4);
      sub_3DBD0(v14, (_BYTE *)(v14 + v15), 2LL * (int)v17);
      if ( v15 > 256 )
      {
        v23 = v14 + 256;
        a2 = (_BYTE *)(v14 + 256);
        sub_341D0(v14, (_BYTE *)(v14 + 256));
        do
        {
          sub_340E0(v23, (__int64)a2);
          v23 += 16;
        }
        while ( v16 != v23 );
      }
      else
      {
        a2 = (_BYTE *)(v14 + v15);
        sub_341D0(v14, (_BYTE *)(v14 + v15));
      }
    }
    else
    {
      sub_3DBD0(v14, (_BYTE *)(v14 + v15), -2);
      a2 = (_BYTE *)(v14 + v15);
      sub_341D0(v14, (_BYTE *)(v14 + v15));
    }
  }
LABEL_12:
  v18 = (char *)v28;
  v26[0] = &off_4D8F8;
  if ( v28 )
  {
    do
    {
      v19 = *((_QWORD **)v18 + 3);
      v20 = v18;
      sub_33860(v19, (__int64)a2, v4);
      v18 = *((char **)v18 + 2);
      v21 = (void (__fastcall *)(__int64, char *))get_hexdsp(v19, a2);
      v21(276, v20 + 32);
      a2 = (_BYTE *)&dword_40;
      operator delete(v20, 0x40u);
    }
    while ( v18 );
  }
  return a1;
}
