unsigned __int64 __fastcall sub_1EA7F50(__int64 *a1, __int64 a2)
{
  unsigned __int64 result; // rax
  int v4; // edx
  _QWORD *v5; // rdi
  unsigned __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbp
  char v10; // dl
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  bool v15; // zf
  unsigned __int64 v16; // rsi
  int v17; // eax
  unsigned __int64 v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // rdx
  char v21; // al
  __int64 v22; // rcx
  unsigned int *v23; // rax
  unsigned __int64 v24; // rdi
  __int64 v25; // r12
  __int64 v26; // r15
  __int64 v27; // rax
  __int64 v28; // r11
  __int64 v29; // rax
  __int64 v30; // [rsp+8h] [rbp-A0h] BYREF
  __int64 *v31; // [rsp+18h] [rbp-90h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v33[120]; // [rsp+30h] [rbp-78h] BYREF

  result = a2;
  v4 = *((_DWORD *)a1 + 2352);
  v30 = a2;
  if ( v4 )
  {
    v22 = *((unsigned int *)a1 + 2826);
    if ( v22 + 1 > (unsigned __int64)*((unsigned int *)a1 + 2827) )
    {
      sub_2237220(a1 + 1412, a1 + 1414, v22 + 1, 8);
      v22 = *((unsigned int *)a1 + 2826);
      result = a2;
    }
    *(_QWORD *)(a1[1412] + 8 * v22) = result;
    ++*((_DWORD *)a1 + 2826);
  }
  else
  {
    result = *(_QWORD *)(a2 + 16);
    v5 = (_QWORD *)(result & 0xFFFFFFFFFFFFFFF8LL);
    if ( (result & 4) != 0 )
      v5 = (_QWORD *)*v5;
    if ( v5 )
    {
      v6 = sub_B8EAA0((__int64)v5);
      v9 = v30;
      v10 = *(_BYTE *)(v6 + 8) & 0x7F;
      LOBYTE(v11) = v10 == 0;
      if ( v10 != 24 && (*(_BYTE *)(v6 + 8) & 0x7F) != 0 )
      {
        v13 = (v10 + 70) & 0x7F;
        if ( (unsigned __int8)v13 > 4u )
          goto LABEL_21;
        v12 = *(_QWORD *)(v30 + 40);
        if ( v12 )
          goto LABEL_20;
      }
      else
      {
        v12 = *(_QWORD *)(v30 + 40);
        if ( v12 )
        {
          v13 = *(_QWORD *)(a1[18] + 2320);
          if ( (*(_BYTE *)(v13 + 1) & 8) == 0 && (*(_BYTE *)(v6 + 8) & 0x7F) == 0 )
          {
            v14 = v12 & 0xFFFFFFFFFFFFFFF8LL;
            v15 = (v12 & 7) == 0;
            v16 = 0;
            if ( v15 )
              v16 = v14;
            if ( (*(_BYTE *)(v16 + 4) & 0x10) != 0 )
            {
              (*(void (__fastcall **)(__int64 *, unsigned __int64, __int64, __int64))(*a1 + 24))(a1, v16, v13, v11);
              goto LABEL_14;
            }
LABEL_21:
            v17 = *(_BYTE *)(v9 + 28) & 0x7F;
            if ( (unsigned int)(v17 - 60) > 1 )
            {
LABEL_15:
              if ( (unsigned int)(v17 - 41) > 1 )
              {
                result = (unsigned int)(v17 - 34);
                if ( (unsigned int)result > 5 )
                  return result;
                result = sub_B77AF0(v9);
                v18 = result;
                if ( !result )
                  return result;
                v23 = (unsigned int *)sub_B77B50(v9);
                v19 = (__int64)(v23 + 2);
                v20 = *v23;
              }
              else
              {
                v18 = sub_BBFE00(v9);
                result = *(_QWORD *)(v9 + 128);
                v19 = result + 8;
                v20 = *(unsigned int *)result;
                if ( !v18 )
                  return result;
              }
              goto LABEL_23;
            }
LABEL_22:
            v18 = sub_BBF290(v9);
            result = *(_QWORD *)(v9 + 168);
            v19 = result + 8;
            v20 = *(unsigned int *)result;
            if ( !v18 )
              return result;
LABEL_23:
            v21 = *(_BYTE *)(v30 + 28) & 0x7F;
            if ( v21 == 42 || v21 == 61 )
              return sub_BBDBF0(v18, 0);
            else
              return sub_BBDC30(v18, v19, v20, 0);
          }
LABEL_20:
          sub_B94670(v6, v12, v13, v11, v7, v8);
          v9 = v30;
          goto LABEL_21;
        }
      }
      if ( sub_1EA74C0(v30) )
      {
        v24 = *(_QWORD *)(v30 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v30 + 16) & 4) != 0 )
          v24 = *(_QWORD *)(v24 + 8);
        v25 = sub_B8C1B0(v24);
        if ( v25 )
        {
          v26 = v25;
          do
          {
            v27 = sub_B8D340(v26);
            v28 = *a1;
            ptr[0] = v33;
            v31 = &v30;
            ptr[1] = (void *)0x800000000LL;
            (*(void (__fastcall **)(__int64 *, __int64, bool (__fastcall *)(__int64, int), __int64 **, void **))(v28 + 144))(
              a1,
              v27,
              sub_1EA7D70,
              &v31,
              ptr);
            if ( ptr[0] != v33 )
              free(ptr[0]);
            v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 40LL))(v26);
            v26 = v29;
          }
          while ( v25 != v29 && v29 );
        }
      }
LABEL_14:
      v9 = v30;
      v17 = *(_BYTE *)(v30 + 28) & 0x7F;
      if ( (unsigned int)(v17 - 60) > 1 )
        goto LABEL_15;
      goto LABEL_22;
    }
  }
  return result;
}
