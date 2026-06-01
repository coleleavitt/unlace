__int64 __fastcall sub_45E8E0(
        __int64 a1,
        unsigned int a2,
        __int64 *a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  void *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 result; // rax
  void *ptr; // [rsp+0h] [rbp-28h] BYREF
  __int64 v18; // [rsp+8h] [rbp-20h]
  __int64 v19; // [rsp+10h] [rbp-18h]
  unsigned __int64 v20; // [rsp+18h] [rbp-10h]

  v20 = __readfsqword(0x28u);
  switch ( a2 )
  {
    case 0u:
      result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 1128LL))(a1, a3[1]);
      break;
    case 1u:
      QT::QString::fromUtf8(&ptr, 8, "Hex view");
      v12 = ptr;
      v13 = *a3;
      if ( *a3 )
      {
        v12 = *(void **)v13;
        *(_QWORD *)v13 = ptr;
        v14 = *(_QWORD *)(v13 + 8);
        ptr = v12;
        *(_QWORD *)(v13 + 8) = v18;
        v18 = v14;
        v15 = *(_QWORD *)(v13 + 16);
        *(_QWORD *)(v13 + 16) = v19;
        v19 = v15;
      }
      if ( v12 )
      {
        if ( !_InterlockedSub((volatile signed __int32 *)v12, 1u) )
          free(ptr);
      }
      goto LABEL_7;
    case 2u:
      result = sub_2CE670(a1, *(_QWORD *)a3[1]);
      break;
    case 3u:
      result = sub_2CE4A0(a1, a2, a4, a5, a6, a7, a8, a9, a10, a11);
      break;
    case 4u:
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 1072LL))(a1);
      break;
    default:
LABEL_7:
      result = v20 - __readfsqword(0x28u);
      break;
  }
  return result;
}
