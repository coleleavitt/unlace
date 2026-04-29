__int64 __fastcall sub_302E10(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // rbp
  bool (__fastcall *v3)(__int64); // rax
  __int64 v4; // rdi
  int v5; // eax
  int v6; // ebx
  bool (__fastcall **v8)(__int64); // rdx
  __int64 (__fastcall *v9)(__int64, __int64 *); // rdx
  __int64 *v10; // rsi
  int v11; // eax
  int v12; // ebx
  bool (__fastcall **v13)(__int64); // rax
  int v14; // [rsp+Ch] [rbp-3Ch] BYREF
  __int64 v15; // [rsp+10h] [rbp-38h] BYREF
  __int64 v16; // [rsp+18h] [rbp-30h] BYREF
  _QWORD v17[5]; // [rsp+20h] [rbp-28h] BYREF

  v17[1] = __readfsqword(0x28u);
  if ( !sub_302920((__int64)a1) )
    return -1;
  if ( a2 >= a1[6] )
    sub_2A9200();
  v2 = a1[5] + 56 * a2;
  v3 = **(bool (__fastcall ***)(__int64))v2;
  if ( v3 == sub_2A8A40 )
  {
    a2 = v2 + 32;
    if ( (unsigned int)sub_253040(v2 + 8, v2 + 32) )
      goto LABEL_5;
    return -1;
  }
  if ( !v3(v2) )
    return -1;
LABEL_5:
  v4 = a1[9];
  v15 = v4;
  if ( !v4 )
  {
    v6 = *(_DWORD *)(v2 + 48);
    if ( v6 != -2 )
      goto LABEL_7;
    v13 = *(bool (__fastcall ***)(__int64))v2;
    v16 = 0;
    v9 = (__int64 (__fastcall *)(__int64, __int64 *))v13[2];
    if ( v9 == sub_2BD510 )
    {
      v10 = *(__int64 **)(v2 + 8);
      v14 = -1;
      if ( v10 != (__int64 *)-1LL )
      {
        v17[0] = 0;
        goto LABEL_13;
      }
LABEL_19:
      v11 = -1;
      goto LABEL_14;
    }
LABEL_20:
    v10 = &v16;
    v11 = v9(v2, &v16);
    goto LABEL_14;
  }
  v5 = *(_DWORD *)(v4 + 104);
  *(_DWORD *)(v4 + 104) = v5 + 1;
  v6 = *(_DWORD *)(v2 + 48);
  if ( v6 != -2 )
  {
LABEL_7:
    sub_13BC80(&v15, a2);
    return v6;
  }
  v8 = *(bool (__fastcall ***)(__int64))v2;
  v16 = v4;
  v9 = (__int64 (__fastcall *)(__int64, __int64 *))v8[2];
  *(_DWORD *)(v4 + 104) = v5 + 2;
  if ( v9 != sub_2BD510 )
    goto LABEL_20;
  v10 = *(__int64 **)(v2 + 8);
  v14 = -1;
  if ( v10 == (__int64 *)-1LL )
    goto LABEL_19;
  v17[0] = v4;
  *(_DWORD *)(v4 + 104) = v5 + 3;
LABEL_13:
  sub_2BBBC0(v4, (__int64)v10, 0, (__int64)&v14);
  sub_13BC80(v17, (__int64)v10);
  v11 = v14;
LABEL_14:
  *(_DWORD *)(v2 + 48) = v11;
  sub_13BC80(&v16, (__int64)v10);
  v12 = *(_DWORD *)(v2 + 48);
  sub_13BC80(&v15, (__int64)v10);
  return v12;
}
