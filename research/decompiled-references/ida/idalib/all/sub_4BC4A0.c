unsigned __int64 __fastcall sub_4BC4A0(__int64 a1)
{
  __int64 v1; // rax
  int *v3; // [rsp+0h] [rbp-38h] BYREF
  int v4; // [rsp+Ch] [rbp-2Ch]
  __int64 v5; // [rsp+10h] [rbp-28h]
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  v3 = (int *)off_2B25850;
  sub_4B9370(a1, &v3, 0);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 1672) + 8LL) )
  {
    v4 = 0;
    v5 = -2;
    v3 = &off_2B2E3D0;
    v1 = sub_55C400(a1);
    sub_4B9370(a1, &v3, v1);
  }
  return v6 - __readfsqword(0x28u);
}
