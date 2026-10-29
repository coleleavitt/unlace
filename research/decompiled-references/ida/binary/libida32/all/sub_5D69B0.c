__int64 __fastcall sub_5D69B0(__int64 a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v6; // [rsp+0h] [rbp-28h] BYREF
  __int16 v7; // [rsp+8h] [rbp-20h]
  unsigned __int64 v8; // [rsp+18h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  v6 = 0;
  v7 = (unsigned __int8)getinf(59);
  v1 = *(_QWORD **)(*(_QWORD *)(a1 + 120) + 56LL);
  v2 = v1[1];
  if ( v2 )
  {
    v3 = *v1 + 16 * v2;
    v4 = *(_QWORD *)(v3 - 16);
    LOWORD(v3) = *(_WORD *)(v3 - 8);
    v6 = v4 + 1;
    v7 = v3;
  }
  return sub_5D6770(a1, &v6);
}

