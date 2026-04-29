__int64 __fastcall sub_16AF0(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 *func; // rax
  unsigned __int64 v3; // r13
  unsigned __int64 *v4; // rbp
  _QWORD v6[2]; // [rsp+0h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+10h] [rbp-B8h]
  __int64 v8; // [rsp+20h] [rbp-A8h]
  __int16 v9; // [rsp+28h] [rbp-A0h]
  __int128 v10; // [rsp+30h] [rbp-98h]
  __int64 v11; // [rsp+40h] [rbp-88h]
  __int64 v12; // [rsp+48h] [rbp-80h]
  int v13; // [rsp+50h] [rbp-78h]
  __int64 v14; // [rsp+58h] [rbp-70h]
  int v15; // [rsp+60h] [rbp-68h]
  __int64 v16; // [rsp+68h] [rbp-60h]
  int v17; // [rsp+70h] [rbp-58h]
  __int64 v18; // [rsp+78h] [rbp-50h]
  int v19; // [rsp+80h] [rbp-48h]
  __int64 v20; // [rsp+88h] [rbp-40h]
  unsigned __int64 v21; // [rsp+98h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  func = (unsigned __int64 *)get_func(a1);
  if ( !func )
    goto LABEL_9;
  v3 = *func;
  v4 = func;
  if ( *func < a1 )
  {
    if ( a1 < func[1] )
    {
      set_func_end(*func, a1);
      auto_mark_range(*v4, a1, 40);
    }
    goto LABEL_9;
  }
  if ( *func != a1 )
  {
LABEL_9:
    v6[0] = a1;
    v9 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_250D0);
    v6[1] = a2;
    v8 = 0;
    v11 = 0xFFFFFFFFLL;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v10 = 0;
    ((void (__fastcall *)(_QWORD *))add_func_ex)(v6);
    return v21 - __readfsqword(0x28u);
  }
  if ( a2 != -1 && func[1] < a2 )
  {
    set_func_end(*func, a2);
    return auto_mark_range(v3, a2, 40);
  }
  return v21 - __readfsqword(0x28u);
}
