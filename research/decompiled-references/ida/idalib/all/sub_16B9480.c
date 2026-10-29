__int64 __fastcall sub_16B9480(__int64 a1, _QWORD *a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD **v7; // rbp
  __int64 *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // [rsp+10h] [rbp-78h] BYREF
  unsigned int v17; // [rsp+18h] [rbp-70h]
  __int16 v18; // [rsp+20h] [rbp-68h] BYREF
  __int64 v19; // [rsp+28h] [rbp-60h]
  unsigned int v20; // [rsp+30h] [rbp-58h] BYREF
  char v21; // [rsp+34h] [rbp-54h]
  __int64 v22; // [rsp+38h] [rbp-50h]
  unsigned int v23; // [rsp+40h] [rbp-48h]

  v7 = (_QWORD **)*a2;
  if ( **(_BYTE **)*a2
    && ((v14 = *v7[1], v15 = *(_DWORD *)(v14 + 48), a3 >= v15)
      ? (a3 = a3 - v15 + sub_B76070(*v7[2], (__int64)a2, a3 - v15, v14))
      : (a3 = *(_DWORD *)(*(_QWORD *)(v14 + 56) + 4LL * a3)),
        *(_DWORD *)(*v7[3] + 16LL) <= a3) )
  {
    *(_BYTE *)(a1 + 16) = 0;
  }
  else
  {
    v21 &= ~1u;
    v18 = 0;
    v8 = (__int64 *)a2[1];
    v19 = 0;
    v9 = *v8;
    v10 = a2[2];
    v20 = 0;
    if ( (unsigned __int8)sub_C3F220(
                            *(_QWORD *)(v9 + 8 * (((*(_BYTE *)(v9 + 2) & 8) != 0) + (unsigned __int64)a3) + 40),
                            (__int64)&v18,
                            *(_QWORD *)(v10 + 248),
                            0,
                            0,
                            a6) )
    {
      v11 = v23;
      v17 = v23;
      if ( v23 > 0x40 )
      {
        sub_2205510(&v16);
        v11 = v17;
        v12 = v16;
      }
      else
      {
        v12 = v22;
      }
      *(_DWORD *)(a1 + 8) = v11;
      *(_QWORD *)a1 = v12;
      *(_BYTE *)(a1 + 12) = 1;
      *(_BYTE *)(a1 + 16) = 1;
    }
    else
    {
      *(_BYTE *)(a1 + 16) = 0;
    }
    if ( v20 > 1 )
    {
      sub_A4F8E0((int *)&v20);
      return a1;
    }
  }
  return a1;
}
