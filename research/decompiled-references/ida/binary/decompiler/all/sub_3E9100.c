__int64 __fastcall sub_3E9100(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rdi
  __int64 v5; // [rsp+0h] [rbp-48h] BYREF
  int v6; // [rsp+8h] [rbp-40h]
  _DWORD v7[3]; // [rsp+1Ch] [rbp-2Ch] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-20h]

  v3 = *(_DWORD **)(a1 + 48);
  v8 = __readfsqword(0x28u);
  if ( (unsigned int)sub_3E8FE0(v3, a2, v7) == 1 )
  {
    v5 = 0x100000001LL;
    v6 = v7[0];
    sub_122C80(a2, (unsigned __int8 *)&v5);
    sub_11A960((__int64)&v5);
    ++*(_DWORD *)(a1 + 56);
  }
  return 0;
}
