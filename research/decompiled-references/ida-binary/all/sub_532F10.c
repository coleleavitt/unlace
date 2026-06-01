unsigned __int64 __fastcall sub_532F10(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  void *v4[2]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v5; // [rsp+10h] [rbp-58h]
  void *ptr[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v7; // [rsp+30h] [rbp-38h]
  unsigned __int64 v8; // [rsp+38h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  v2 = (*(__int64 (__fastcall **)(_QWORD *))(*QT::QCoreApplication::self + 224LL))(QT::QCoreApplication::self);
  v7 = 0;
  v5 = 0;
  *(_OWORD *)ptr = 0;
  *(_OWORD *)v4 = 0;
  *(_QWORD *)a1 = sub_53F320(v2, v4, ptr, 0, 0.0);
  if ( v4[0] && !_InterlockedSub((volatile signed __int32 *)v4[0], 1u) )
    free(v4[0]);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = a1 + 56;
  *(_QWORD *)(a1 + 80) = a1 + 56;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 120) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  return v8 - __readfsqword(0x28u);
}
