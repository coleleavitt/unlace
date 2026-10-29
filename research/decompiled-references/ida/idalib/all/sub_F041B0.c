__int64 __fastcall sub_F041B0(__int64 a1, unsigned __int64 a2, double a3)
{
  __int64 v3; // r13
  __int64 v4; // rdx
  __int64 result; // rax
  void *v6[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v7; // [rsp+10h] [rbp-38h] BYREF

  v3 = *(_QWORD *)a1;
  if ( (*(_BYTE *)(a1 + 28) & 0x20) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 72);
    if ( v4 )
    {
      result = sub_F03E20(*(_QWORD *)a1, a2, v4, a3);
      if ( (_BYTE)result )
        return result;
      v3 = *(_QWORD *)a1;
    }
  }
  sub_BF83A0(v6, a2);
  sub_227BF10(v3, v6[0], v6[1]);
  if ( v6[0] != &v7 )
    operator delete(v6[0]);
  switch ( ((*(_WORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                  & 0xFFFFFFFFFFFFFFF0LL)
                      + 18LL) >> 3)
          + 56)
         & 0x1FF )
  {
    case 0:
      result = sub_995540(*(_QWORD *)a1, "hk");
      break;
    case 1:
      result = sub_995540(*(_QWORD *)a1, "k");
      break;
    case 2:
      result = sub_995540(*(_QWORD *)a1, "lk");
      break;
    case 3:
      result = sub_995540(*(_QWORD *)a1, "uhk");
      break;
    case 4:
      result = sub_995540(*(_QWORD *)a1, "uk");
      break;
    case 5:
      result = sub_995540(*(_QWORD *)a1, "ulk");
      break;
    case 6:
      result = sub_995540(*(_QWORD *)a1, "hr");
      break;
    case 7:
      result = sub_995540(*(_QWORD *)a1, "r");
      break;
    case 8:
      result = sub_995540(*(_QWORD *)a1, "lr");
      break;
    case 9:
      result = sub_995540(*(_QWORD *)a1, "uhr");
      break;
    case 0xA:
      result = sub_995540(*(_QWORD *)a1, "ur");
      break;
    case 0xB:
      result = sub_995540(*(_QWORD *)a1, "ulr");
      break;
  }
  return result;
}
