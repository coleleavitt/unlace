__int64 __fastcall sub_5216A0(__int64 a1, __int64 a2, unsigned __int64 *a3, unsigned int a4)
{
  __int64 v5; // rax
  _QWORD *v6; // r14
  __int64 idati; // r15
  __m128i v10; // [rsp+0h] [rbp-58h] BYREF
  __int16 v11; // [rsp+10h] [rbp-48h]
  unsigned __int64 v12; // [rsp+18h] [rbp-40h]

  v5 = *(_QWORD *)(a2 + 1480);
  v6 = *(_QWORD **)(a2 + 1632);
  v12 = __readfsqword(0x28u);
  idati = *(_QWORD *)(v5 + 8);
  if ( (unsigned __int8)sub_51BD20(v6, idati, a4, *a3 >> 9) )
  {
    v10 = _mm_loadu_si128((const __m128i *)*(_QWORD *)(a1 + 32));
    if ( !sub_520AA0((__int64)(v6 + 1), (unsigned __int64 *)&v10) )
    {
      if ( !under_debugger )
        interr(3361);
      BUG();
    }
    qfree(*(void **)(*(_QWORD *)(a1 + 32) + 8LL));
    *(_WORD *)(a1 + 68) |= 8u;
    **(_QWORD **)(a1 + 32) = *(_QWORD *)(*(_QWORD *)(a2 + 1480) + 8LL);
    *(_DWORD *)(*(_QWORD *)(a1 + 32) + 8LL) = a4;
    return a1;
  }
  else
  {
    v11 = 257;
    v10.m128i_i64[1] = a4;
    if ( !idati )
      idati = get_idati(v6, idati);
    v10.m128i_i64[0] = idati;
    create_tinfo(a3, 61, 189, &v10);
    return sub_51B8E0(*(_QWORD *)(a2 + 1632), *a3);
  }
}

