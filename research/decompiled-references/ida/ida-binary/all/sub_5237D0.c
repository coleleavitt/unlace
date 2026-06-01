__int64 __fastcall sub_5237D0(__int64 a1)
{
  unsigned int v1; // edx
  __int64 *v2; // rdx
  QT::QAbstractItemView *v3; // rdi
  __int64 (__fastcall **v5)(); // [rsp+0h] [rbp-38h] BYREF
  int v6; // [rsp+8h] [rbp-30h]
  __m128i v7; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-10h]

  v1 = 0;
  v8 = __readfsqword(0x28u);
  v6 = 4;
  v5 = standalone_dirtree_widget_crud_action_helper_t___vtable;
  if ( *(_QWORD *)(a1 + 328) )
  {
    v2 = *(__int64 **)(a1 + 200);
    v3 = *(QT::QAbstractItemView **)(a1 + 328);
    v7 = _mm_unpacklo_epi64(
           (__m128i)(unsigned __int64)&standalone_dirtree_widget_action_helper_t::activate,
           (__m128i)(unsigned __int64)&v5);
    return (unsigned int)sub_5232C0(v3, &v7, v2) != 0;
  }
  return v1;
}
