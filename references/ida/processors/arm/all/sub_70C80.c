__int64 __fastcall sub_70C80(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  unsigned int v5; // ebx
  _QWORD v7[2]; // [rsp+0h] [rbp-3A8h] BYREF
  _BYTE v8[360]; // [rsp+10h] [rbp-398h] BYREF
  __int64 v9; // [rsp+330h] [rbp-78h]
  __int64 v10; // [rsp+338h] [rbp-70h]
  __int64 v11; // [rsp+348h] [rbp-60h]
  __int64 v12; // [rsp+350h] [rbp-58h]
  __int64 v13; // [rsp+360h] [rbp-48h]
  __int64 v14; // [rsp+368h] [rbp-40h]
  unsigned __int64 v15; // [rsp+388h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  sub_6F900((__int64)v7, a3, a1, (__int64)&unk_8E510, 1);
  v7[0] = off_A40A0;
  qmemcpy(v8, a2, sizeof(v8));
  if ( (unsigned __int8)match_jpt((__int64)v7)
    && (v3 = *(unsigned __int16 *)(a1 + 4), v4 = *(_QWORD *)(a1 + 16), v4 < v3)
    && (*(_WORD *)(a1 + 4) = v3 - v4, trim_jtable(a1, a2[2], 0), *(_WORD *)(a1 + 4)) )
  {
    mark_switch_insns_jpt((__int64)v7, 2, 0);
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  v7[0] = off_A4B78;
  if ( v13 )
  {
    v14 = 0;
    qfree(v13);
  }
  if ( v11 )
  {
    v12 = 0;
    qfree(v11);
  }
  if ( v9 )
  {
    v10 = 0;
    qfree(v9);
  }
  return v5;
}
