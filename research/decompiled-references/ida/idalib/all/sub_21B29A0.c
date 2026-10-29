__int64 __fastcall sub_21B29A0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rdi
  const char *v6; // rdi
  size_t v7; // rax
  __int64 (__fastcall ***v8)(); // r12
  __int64 v9; // rbp
  __int64 v10; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v11; // [rsp+8h] [rbp-E0h] BYREF
  _QWORD v12[4]; // [rsp+10h] [rbp-D8h] BYREF
  __int16 v13; // [rsp+30h] [rbp-B8h]
  _QWORD v14[4]; // [rsp+40h] [rbp-A8h] BYREF
  __int16 v15; // [rsp+60h] [rbp-88h]
  _QWORD v16[4]; // [rsp+70h] [rbp-78h] BYREF
  __int16 v17; // [rsp+90h] [rbp-58h]
  _QWORD v18[4]; // [rsp+A0h] [rbp-48h] BYREF
  __int16 v19; // [rsp+C0h] [rbp-28h]

  if ( a3 > 3 )
  {
    v5 = *(_QWORD *)(a2 + 88);
    if ( v5 && a3 < *(_DWORD *)(a2 + 80) )
    {
      v6 = (const char *)(a3 + v5);
      *(_BYTE *)(a1 + 16) &= ~1u;
      v7 = 0;
      *(_QWORD *)a1 = v6;
      if ( v6 )
        v7 = strlen(v6);
      *(_QWORD *)(a1 + 8) = v7;
      return a1;
    }
    else
    {
      v11 = *(unsigned int *)(a2 + 80);
      v12[0] = "entry with offset 0x";
      v12[2] = &v10;
      v13 = 3843;
      v14[0] = v12;
      v14[2] = " in a string table with size 0x";
      v16[0] = v14;
      v16[2] = &v11;
      v10 = a3;
      v18[0] = v16;
      v15 = 770;
      v17 = 3842;
      v19 = 770;
      v18[2] = " is invalid";
      v8 = sub_2195B10();
      v9 = operator new(0x40u);
      sub_2220590(v9, v18, 3, v8);
      *(_QWORD *)a1 = v9;
      *(_BYTE *)(a1 + 16) |= 1u;
      return a1;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 16) &= ~1u;
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
    return a1;
  }
}
