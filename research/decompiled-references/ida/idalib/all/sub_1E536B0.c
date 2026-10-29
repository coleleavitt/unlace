__int64 __fastcall sub_1E536B0(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v3; // r10
  __int64 v4; // r9
  int v5; // ecx
  int v6; // ecx
  __int64 result; // rax
  __int64 v8; // r8
  __int64 v11; // r9
  __int64 v12; // rsi
  _BYTE *v13; // rcx
  __int64 *v14; // rdx
  __int64 *v15; // rax
  __int64 v16; // rdx
  unsigned __int8 v17; // [rsp+1h] [rbp-79h]
  __int64 (__fastcall **v18)(); // [rsp+2h] [rbp-78h] BYREF
  int v19; // [rsp+Ah] [rbp-70h]
  void **p_ptr; // [rsp+12h] [rbp-68h]
  char v21; // [rsp+1Ah] [rbp-60h]
  int v22; // [rsp+1Eh] [rbp-5Ch]
  void *ptr; // [rsp+22h] [rbp-58h] BYREF
  __int64 v24; // [rsp+2Ah] [rbp-50h]
  _BYTE v25[72]; // [rsp+32h] [rbp-48h] BYREF

  v3 = *a2;
  v4 = *a2 & 7;
  v5 = v4;
  if ( (_DWORD)v4 == 7 )
  {
    v6 = 3;
    if ( *(_DWORD *)(v3 & 0xFFFFFFFFFFFFFFF8LL) <= 3u )
      v6 = *(_DWORD *)(v3 & 0xFFFFFFFFFFFFFFF8LL);
    v5 = v6 + 8;
  }
  result = 0;
  v8 = (1LL << v5) & 0xF47;
  if ( ((1LL << v5) & 0xF47) == 0 )
  {
    if ( ((1LL << v5) & 0x38) == 0 )
    {
      v11 = (unsigned int)(v4 - 3);
LABEL_8:
      v21 = 0;
      p_ptr = &ptr;
      ptr = v25;
      v24 = 0x200000000LL;
      v18 = off_2C6ECE0;
      v22 = -1;
      v19 = 16842752;
      if ( (unsigned int)v11 <= 2
        && (v12 = *(_QWORD *)((v3 & 0xFFFFFFFFFFFFFFF8LL) + 8), (v12 & 0xFFFFFFFFFFFFFFF0LL) != 0)
        && (*(_BYTE *)(*(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 1) != 0 )
      {
        sub_BC7D30((__int64)&v18, v12);
        v13 = ptr;
        v8 = (unsigned int)v24;
      }
      else
      {
        v13 = v25;
      }
      result = sub_1E50B50(a1, *((unsigned int *)a2 + 2), a3, (__int64)v13, v8, v11);
      if ( ptr != v25 )
      {
        v17 = result;
        free(ptr);
        return v17;
      }
      return result;
    }
    if ( (unsigned int)(v5 - 3) <= 2 )
    {
      v14 = (__int64 *)a2[2];
      if ( v14 )
        return sub_1E535C0(a1, *((_DWORD *)a2 + 2), v14, a3);
    }
    v11 = (unsigned int)(v4 - 3);
    v15 = nullptr;
    if ( (unsigned int)v11 <= 2 )
      v15 = (__int64 *)(*(_QWORD *)((v3 & 0xFFFFFFFFFFFFFFF8LL) + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v16 = *v15;
    result = 0;
    if ( (*(_BYTE *)(v16 + 17) & 1) != 0 )
      goto LABEL_8;
  }
  return result;
}
