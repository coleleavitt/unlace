_QWORD *__fastcall sub_128F080(_QWORD *a1, __int64 a2)
{
  _BYTE *v2; // r13
  __int64 v3; // rbx
  void *v4; // rax
  void *v6[2]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v7; // [rsp+10h] [rbp-78h] BYREF
  void *src[2]; // [rsp+20h] [rbp-68h] BYREF
  _DWORD v9[22]; // [rsp+30h] [rbp-58h] BYREF

  (*(void (__fastcall **)(void **))(*(_QWORD *)a2 + 520LL))(v6);
  sub_22B9ED0(src, v6);
  if ( v6[0] != &v7 )
    operator delete(v6[0]);
  if ( v9[4] == 1 && !v9[8] )
    sub_22BA610(src, 7);
  v2 = src[0];
  v3 = (__int64)src[1];
  v4 = a1 + 2;
  *a1 = a1 + 2;
  if ( &v2[v3] && !v2 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v3 > 0xF )
  {
    if ( v3 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v4 = (void *)operator new(v3 + 1);
    a1[2] = v3;
    *a1 = v4;
LABEL_18:
    memcpy(v4, v2, v3);
    v4 = (void *)*a1;
    goto LABEL_9;
  }
  if ( v3 == 1 )
  {
    *((_BYTE *)a1 + 16) = *v2;
    goto LABEL_9;
  }
  if ( v3 )
    goto LABEL_18;
LABEL_9:
  a1[1] = v3;
  *((_BYTE *)v4 + v3) = 0;
  if ( src[0] != v9 )
    operator delete(src[0]);
  return a1;
}
