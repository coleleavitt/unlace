__int64 __fastcall sub_1E52ED0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 result; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // r9
  void **v13; // r15
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 *v16; // rax
  char v17; // al
  unsigned int v18; // eax
  unsigned __int8 v19; // [rsp+7h] [rbp-A1h]
  __int64 v20[2]; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+18h] [rbp-90h] BYREF
  __int64 (__fastcall **v22)(); // [rsp+20h] [rbp-88h] BYREF
  int v23; // [rsp+28h] [rbp-80h]
  void **p_ptr; // [rsp+30h] [rbp-78h]
  char v25; // [rsp+38h] [rbp-70h]
  unsigned int v26; // [rsp+3Ch] [rbp-6Ch]
  void *ptr; // [rsp+40h] [rbp-68h] BYREF
  __int64 v28; // [rsp+48h] [rbp-60h]
  _BYTE v29[88]; // [rsp+50h] [rbp-58h] BYREF

  v20[0] = a3;
  if ( sub_F22B30(v20) || !(unsigned __int8)sub_F235C0(v20, a2, v5, v6, v7, v8) )
    return 0;
  v25 = 0;
  p_ptr = &ptr;
  ptr = v29;
  v28 = 0x200000000LL;
  v22 = off_2C6ECE0;
  v26 = -1;
  v23 = 16842752;
  v21 = v20[0];
  v10 = sub_F22BD0(&v21, 0);
  v11 = v10;
  if ( v10 && (*(_BYTE *)(v10 + 28) & 0x7F) == 0x44 && (*(_BYTE *)(v10 + 80) & 2) != 0 )
  {
    if ( !(unsigned __int8)sub_B8BE90(v10)
      || ((v17 = *(_BYTE *)(v11 + 28) & 0x7F, v17 != 67)
        ? (v17 != 47
         ? (v18 = *(_DWORD *)(v11 + 64) & 0xFFFFF)
         : (v18 = *(_DWORD *)(v11 + 68) & 0xFFFFF))
        : (sub_BBE5B0(v11), v18 = sub_BBE590(v11)),
          v18 < v26) )
    {
      v13 = p_ptr;
      v14 = v11 | 4;
      v15 = *((unsigned int *)p_ptr + 2);
      if ( v15 + 1 > (unsigned __int64)*((unsigned int *)p_ptr + 3) )
      {
        sub_2237220(p_ptr, p_ptr + 2, v15 + 1, 16);
        v15 = *((unsigned int *)v13 + 2);
      }
      v16 = (__int64 *)((char *)*v13 + 16 * v15);
      *v16 = v14;
      v16[1] = 0;
      ++*((_DWORD *)v13 + 2);
    }
  }
  sub_BC8830((__int64)&v22, v21);
  result = sub_1E50B50(a1, (unsigned int)a2, a4, (__int64)ptr, (unsigned int)v28, v12);
  if ( ptr != v29 )
  {
    v19 = result;
    free(ptr);
    return v19;
  }
  return result;
}
