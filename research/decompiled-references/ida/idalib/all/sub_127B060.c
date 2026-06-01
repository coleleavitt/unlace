_QWORD *__fastcall sub_127B060(_QWORD *a1, __int64 a2)
{
  void *v2; // r13
  __int64 v3; // rdx
  bool v4; // zf
  _BYTE *v5; // r14
  signed __int64 v6; // rbp
  __int64 v8; // rdx
  __int64 v9; // rax
  void *v10; // rax
  _QWORD v11[4]; // [rsp+0h] [rbp-188h] BYREF
  __int16 v12; // [rsp+20h] [rbp-168h]
  char *v13; // [rsp+30h] [rbp-158h] BYREF
  __int16 v14; // [rsp+50h] [rbp-138h]
  _BYTE v15[32]; // [rsp+60h] [rbp-128h] BYREF
  __int16 v16; // [rsp+80h] [rbp-108h]
  _BYTE v17[32]; // [rsp+90h] [rbp-F8h] BYREF
  __int16 v18; // [rsp+B0h] [rbp-D8h]
  void *ptr; // [rsp+C0h] [rbp-C8h] BYREF
  size_t n[2]; // [rsp+C8h] [rbp-C0h]
  _BYTE v21[176]; // [rsp+D8h] [rbp-B0h] BYREF

  v2 = a1 + 2;
  v3 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)(v3 + 496) )
  {
    *a1 = v2;
    sub_127AFA0(a1, *(_BYTE **)(v3 + 488), *(_QWORD *)(v3 + 488) + *(_QWORD *)(v3 + 496));
    return a1;
  }
  v4 = *(_BYTE *)(a2 + 2384) == 0;
  v18 = 257;
  ptr = v21;
  *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v16 = 257;
  v13 = "..";
  v14 = 259;
  if ( v4 )
  {
    v12 = 260;
    v11[0] = v3 + 104;
  }
  else
  {
    v8 = *(_QWORD *)(a2 + 2488);
    v9 = *(_QWORD *)(a2 + 2496);
    v12 = 261;
    v11[0] = v8;
    v11[1] = v9;
  }
  sub_228A3B0(&ptr, v11, &v13, v15, v17);
  v5 = ptr;
  v6 = n[0];
  *a1 = v2;
  if ( &v5[v6] && !v5 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v6 > 0xF )
  {
    if ( v6 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v10 = (void *)operator new(v6 + 1);
    a1[2] = v6;
    *a1 = v10;
    v2 = v10;
LABEL_18:
    memcpy(v2, v5, v6);
    v2 = (void *)*a1;
    goto LABEL_9;
  }
  if ( v6 == 1 )
  {
    *((_BYTE *)a1 + 16) = *v5;
    goto LABEL_9;
  }
  if ( v6 )
    goto LABEL_18;
LABEL_9:
  a1[1] = v6;
  *((_BYTE *)v2 + v6) = 0;
  if ( ptr != v21 )
    free(ptr);
  return a1;
}
