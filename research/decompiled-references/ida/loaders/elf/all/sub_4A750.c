__int64 __fastcall sub_4A750(__int64 *a1, __int64 a2, char a3)
{
  __int64 v3; // rbp
  unsigned int v4; // ecx
  __int64 *v5; // rax
  bool v6; // zf
  __int64 v8; // rbp
  _BYTE v9[12]; // [rsp+Ch] [rbp-3Ch] BYREF
  __int64 v10; // [rsp+18h] [rbp-30h] BYREF
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v9[0] = a3;
  v11[1] = __readfsqword(0x28u);
  v3 = *a1;
  if ( !*a1 )
  {
    v4 = 4;
    if ( *(_BYTE *)(a2 + 617) )
      v4 = 8;
    v5 = (__int64 *)sub_4A4B0((__int64)a1, a2, v9, v4);
    if ( v5 )
    {
      v3 = *v5;
      v6 = v9[0] == 0;
      *a1 = *v5;
      a1[1] = v5[1];
      if ( !v6 )
      {
        if ( *(_BYTE *)(a2 + 617) )
          ((void (__fastcall *)(__int64, _QWORD))put_qword)(v3, 0);
        else
          put_dword(v3, 0);
        set_name(*a1, "_GLOBAL_OFFSET_TABLE_", 6144);
        v8 = *a1;
        v10 = -1;
        netnode_check(&v10, "$ got", 0, 1);
        v11[0] = ea2node(v8) + 1;
        netnode_supset(v10, 0, v11, 8, 65);
        return *a1;
      }
    }
  }
  return v3;
}

