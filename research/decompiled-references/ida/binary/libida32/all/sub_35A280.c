unsigned __int64 __fastcall sub_35A280(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  int segm_base; // eax
  _BYTE v5[136]; // [rsp+0h] [rbp-A8h] BYREF
  unsigned __int64 v6; // [rsp+88h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  v2 = getseg(a2);
  segm_base = get_segm_base(v2);
  btoa32(v5, 136, a2 - segm_base, 0);
  (*(void (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, v5, 0);
  return v6 - __readfsqword(0x28u);
}

