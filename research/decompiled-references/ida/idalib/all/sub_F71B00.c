__int64 __fastcall sub_F71B00(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rcx
  _BYTE *v3; // rsi
  void *v4; // rdx
  __int64 (__fastcall **v6)(); // [rsp+0h] [rbp-428h] BYREF
  int v7; // [rsp+8h] [rbp-420h]
  __int128 v8; // [rsp+10h] [rbp-418h]
  __int64 v9; // [rsp+20h] [rbp-408h]
  char v10; // [rsp+28h] [rbp-400h]
  int v11; // [rsp+2Ch] [rbp-3FCh]
  void **p_ptr; // [rsp+30h] [rbp-3F8h]
  void *ptr; // [rsp+40h] [rbp-3E8h] BYREF
  __m128i si128; // [rsp+48h] [rbp-3E0h]
  _BYTE v15[72]; // [rsp+58h] [rbp-3D0h] BYREF
  _QWORD v16[113]; // [rsp+A0h] [rbp-388h] BYREF

  sub_FEA220(v16);
  ptr = v15;
  v7 = 2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
  v10 = 0;
  v6 = &off_2BEBEE0;
  v11 = 1;
  v9 = 0;
  v8 = 0;
  p_ptr = &ptr;
  sub_227B8B0(&v6, 0, 0, 0);
  if ( *a2 )
    sub_F6EBE0(a2, (__int64)&v6);
  v2 = a1 + 16;
  v3 = *p_ptr;
  if ( *p_ptr )
  {
    v4 = p_ptr[1];
    *(_QWORD *)a1 = v2;
    sub_F6EAC0((_QWORD *)a1, v3, (__int64)v4 + (_QWORD)v3);
  }
  else
  {
    *(_QWORD *)a1 = v2;
    *(_QWORD *)(a1 + 8) = 0;
    *(_BYTE *)(a1 + 16) = 0;
  }
  v6 = (__int64 (__fastcall **)())&unk_2C76288;
  sub_227B7A0(&v6);
  if ( ptr != v15 )
    free(ptr);
  sub_9985E0(v16);
  return a1;
}
