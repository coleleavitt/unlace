unsigned __int64 __fastcall sub_16B280(__int64 a1, const __m128i *a2)
{
  const __m128i *v3; // rdx
  __int64 *v4; // rdi
  __int64 v6; // rax

  v3 = a2;
  v4 = (__int64 *)qword_2544C8;
  if ( !qword_2544C8 )
  {
    v6 = operator new(0x18u);
    v3 = a2;
    *(_QWORD *)v6 = 0;
    v4 = (__int64 *)v6;
    qword_2544C8 = v6;
    *(_OWORD *)(v6 + 8) = 0;
  }
  return sub_16AA90(v4, *(_QWORD *)(a1 + 96), v3, 1, 0, 0);
}

