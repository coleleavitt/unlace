__int64 __fastcall sub_578DD0(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, __int64, _QWORD, __int64, __int64, _QWORD, void *),
        __int64 a3)
{
  unsigned int v3; // r14d
  void *v4; // rbx
  const char *v5; // r15
  __int64 v6; // r15
  __int64 v8; // rax
  unsigned __int8 v9; // al
  void *v10; // rdi
  __int64 v12; // [rsp+10h] [rbp-C0h]
  __int64 v14; // [rsp+28h] [rbp-A8h] BYREF
  void *ptr; // [rsp+30h] [rbp-A0h]
  __int128 v16; // [rsp+38h] [rbp-98h]
  void *v17; // [rsp+50h] [rbp-80h] BYREF
  __int128 v18; // [rsp+58h] [rbp-78h]
  void *v19; // [rsp+68h] [rbp-68h] BYREF
  __int128 v20; // [rsp+70h] [rbp-60h]
  __int64 v21; // [rsp+80h] [rbp-50h]
  int v22; // [rsp+88h] [rbp-48h]
  char v23; // [rsp+8Ch] [rbp-44h]
  unsigned __int64 v24; // [rsp+98h] [rbp-38h]

  v3 = 0;
  v4 = nullptr;
  v24 = __readfsqword(0x28u);
  v17 = nullptr;
  v19 = nullptr;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v14 = 0;
  v12 = 0;
  v18 = 0;
  v20 = 0;
  while ( (unsigned int)sub_578A20(a1, (__int64)&v17, 4, &v14) )
  {
    if ( BYTE2(v22) > 0x8Bu )
    {
      if ( BYTE2(v22) == 0xA6 || BYTE2(v22) == 0xF1 )
        break;
    }
    else if ( BYTE2(v22) > 0x89u )
    {
      if ( !v4 )
        goto LABEL_20;
      v8 = qlseek(a1, 0, 1);
      v3 = a2(a3, v12, 0, v8 - v12, v8 - v12, 0, v4);
      qfree(v4);
      v4 = nullptr;
    }
    else if ( BYTE2(v22) == 0x80 )
    {
      if ( !v4 )
      {
LABEL_7:
        qfree(v4);
        if ( !(_QWORD)v18 )
        {
          *(_QWORD *)&v20 = 0;
LABEL_9:
          v5 = haystack;
          goto LABEL_10;
        }
        v9 = sub_578C20((__int64)&v17, 0);
        sub_578C70((__int64)&v17, (__int64)&v19, v9);
        if ( !(_QWORD)v20 )
          goto LABEL_9;
        v5 = (const char *)v19;
LABEL_10:
        ptr = nullptr;
        v16 = 0;
        if ( !(unsigned __int8)is_valid_utf8(v5) && (unsigned __int8)idb_utf8() )
        {
          v10 = ptr;
          if ( (unsigned __int64)v16 < *((_QWORD *)&v16 + 1) )
          {
            if ( (_QWORD)v16 )
            {
              if ( ptr )
              {
                v10 = (void *)qrealloc(ptr);
                if ( !v10 )
                  v10 = ptr;
              }
            }
          }
          if ( v4 )
          {
            v4 = v10;
          }
          else
          {
            v4 = v10;
            v12 = v14;
          }
        }
        else
        {
          v6 = qstrdup(v5);
          if ( v4 )
          {
            if ( !ptr )
              goto LABEL_15;
LABEL_14:
            *(_QWORD *)&v16 = 0;
            qfree(ptr);
            goto LABEL_15;
          }
          v12 = v14;
          if ( ptr )
            goto LABEL_14;
LABEL_15:
          v4 = (void *)v6;
        }
      }
    }
    else if ( BYTE2(v22) == 0x82 )
    {
      goto LABEL_7;
    }
  }
  if ( !v4 )
    goto LABEL_21;
  qfree(v4);
LABEL_20:
  v3 = 2;
LABEL_21:
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree(v19);
  }
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree(v17);
  }
  return v3;
}

