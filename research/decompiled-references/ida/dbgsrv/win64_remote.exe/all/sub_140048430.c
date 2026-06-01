/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140048430
// Address: 0x0000000140048430

//----- (0000000140048430) ----------------------------------------------------
__int64 __fastcall sub_140048430(__int64 a1, unsigned int a2)
{
  unsigned __int8 v4; // r15
  _QWORD **v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 **v9; // rcx
  __int64 i; // rax
  __int64 *j; // rcx
  __int64 v12; // rcx
  void **v13; // rcx
  void *v14; // rax

  v4 = 0;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 448) + 88LL) + 8LL))(*(_QWORD *)(*(_QWORD *)(a1 + 448)
                                                                                                 + 88LL));
  v5 = *(_QWORD ***)(*(_QWORD *)(*(_QWORD *)(a1 + 448) + 88LL) + 8LL);
  v6 = *v5;
  if ( *v5 != v5 )
  {
    while ( 1 )
    {
      v7 = v6[4];
      if ( v7 != a1 )
      {
        v8 = *(_QWORD *)(v7 + 440);
        if ( *(_BYTE *)(v8 + 692) )
        {
          if ( *(_DWORD *)(v8 + 488) == a2
            && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v8 + 504LL))(*(_QWORD *)(v7 + 440), a2) )
          {
            break;
          }
        }
      }
      v9 = (__int64 **)v6[2];
      if ( *((_BYTE *)v9 + 25) )
      {
        for ( i = v6[1]; !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 8) )
        {
          if ( v6 != *(_QWORD **)(i + 16) )
            break;
          v6 = (_QWORD *)i;
        }
        v6 = (_QWORD *)i;
      }
      else
      {
        v6 = (_QWORD *)v6[2];
        for ( j = *v9; !*((_BYTE *)j + 25); j = (__int64 *)*j )
          v6 = j;
      }
      if ( v6 == *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 448) + 88LL) + 8LL) )
        goto LABEL_22;
    }
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 440) + 104LL))(*(_QWORD *)(a1 + 440));
    v12 = *(_QWORD *)(a1 + 440);
    if ( v12 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 32LL))(v12, 1);
    *(_QWORD *)(a1 + 440) = v8;
    v4 = 1;
    if ( *(_BYTE *)(a1 + 184) )
      sub_140002CE0((struct __crt_locale_pointers *)"reusing previously broken debugging session\n");
    v13 = (void **)v6[5];
    if ( v13 )
      sub_14005D8F0(v13);
    sub_1400549F0(v7);
    v14 = (void *)sub_14000C8A0((_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 448) + 88LL) + 8LL), (__int64)v6);
    j_j_free(v14);
    (**(void (__fastcall ***)(__int64, __int64))v7)(v7, 1);
    *(_BYTE *)(v8 + 692) = 0;
  }
LABEL_22:
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 448) + 88LL) + 16LL))(*(_QWORD *)(*(_QWORD *)(a1 + 448)
                                                                                                  + 88LL));
  return v4;
}
