__int64 __fastcall sub_3FE660(__int64 a1, __int64 a2, __int64 a3, char a4, double a5)
{
  __int64 v6; // rbx
  unsigned int v8; // r15d
  unsigned __int8 v10; // al
  __int64 v11; // rsi
  unsigned int v12; // eax
  __int64 v13; // r9
  _DWORD *v14; // rdi
  int v15; // r14d
  int v16; // ebp
  int *v17; // r12
  int v18; // ebx
  int *v19; // r15
  __int64 (__fastcall *v20)(__int64, int); // rax
  __int64 v21; // rsi
  int v22; // eax
  int tinfo_size; // eax
  __int64 v24; // rdi
  __int64 v25; // rsi
  int v26; // r12d
  __int64 (__fastcall *v27)(__int64, int); // rax
  int v28; // eax
  __int64 v30; // [rsp+8h] [rbp-90h]
  unsigned int dtype_size; // [rsp+10h] [rbp-88h]
  __int64 v32; // [rsp+18h] [rbp-80h]
  unsigned int v34; // [rsp+24h] [rbp-74h]
  char v35[8]; // [rsp+38h] [rbp-60h] BYREF
  int v36[6]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v37; // [rsp+58h] [rbp-40h]

  v6 = a1;
  v37 = __readfsqword(0x28u);
  v8 = sub_3EE030(a1, a3);
  if ( (_BYTE)v8 )
  {
    v10 = sub_3EE110(a1, a3, a5);
    v11 = a3;
    dtype_size = get_dtype_size(v10);
    v12 = sub_3EE210(a1, a3, a5);
    v13 = *(_QWORD *)(a3 + 8);
    v14 = *(_DWORD **)(a1 + 832);
    if ( (_DWORD)v13 == 1 )
    {
      sub_3FE370((__int64)v35, *(_QWORD *)(v6 + 832), dtype_size, v12, a4, a5);
      copy_tinfo_t(a2 + 24, v35);
      clear_tinfo_t(v35);
      tinfo_size = get_tinfo_size(0, *(_QWORD *)(a2 + 24), 0);
      v24 = *(_QWORD *)(v6 + 832);
      v25 = *(unsigned __int16 *)(a3 + 6);
      v26 = tinfo_size;
      v27 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v24 + 168LL);
      if ( v27 == sub_3EA010 )
        v28 = sub_3EA010(v24, v25);
      else
        v28 = v27(v24, v25);
      *(_BYTE *)a2 = 1;
      *(_DWORD *)(a2 + 8) = v28;
      *(_DWORD *)(a2 + 4) = v26;
    }
    else
    {
      if ( v14[20] == 8 )
      {
        v15 = 163;
        v16 = 1;
      }
      else
      {
        v11 = (unsigned int)*(char *)(a3 + 33);
        v15 = 61;
        v16 = v11 + 1;
      }
      if ( (unsigned __int64)(int)v13 > 4 )
      {
        if ( !under_debugger )
          sub_3835A0(0xC904u, v11, a5);
        BUG();
      }
      if ( (_DWORD)v13 )
      {
        v34 = v12;
        v32 = *(_QWORD *)(a3 + 8);
        v17 = &v36[(unsigned int)(v13 - 1) + 1];
        v30 = v6;
        v18 = *(unsigned __int16 *)(a3 + 6) - v15;
        v19 = v36;
        do
        {
          v20 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v14 + 168LL);
          v21 = (unsigned int)(v15 + v18 % 32);
          if ( v20 == sub_3EA010 )
          {
            v22 = sub_3EA010((__int64)v14, v21);
          }
          else
          {
            v22 = v20((__int64)v14, v21);
            v14 = *(_DWORD **)(v30 + 832);
          }
          *v19++ = v22;
          v18 += v16;
        }
        while ( v17 != v19 );
        LODWORD(v13) = v32;
        v12 = v34;
        v6 = v30;
      }
      return (unsigned int)sub_3FE0C0(a2, (__int64)v14, *(_QWORD *)(v6 + 8), a4, dtype_size, v12, v13, v36);
    }
  }
  return v8;
}
