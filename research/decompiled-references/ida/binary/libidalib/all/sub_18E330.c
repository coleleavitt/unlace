unsigned __int64 __fastcall sub_18E330(TEditor *this, void *src)
{
  size_t v3; // rax
  size_t v4; // rbx
  unsigned __int64 v5; // rdi
  size_t v6; // rbx
  size_t v8; // r13
  void *v9; // [rsp+0h] [rbp-48h]
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  v9 = nullptr;
  if ( src && (v3 = strlen((const char *)src), (v4 = v3) != 0) )
  {
    v8 = v3 + 1;
    v9 = (void *)qvector_reserve();
    memmove(v9, src, v4);
    *((_BYTE *)v9 + v4) = 0;
    v6 = v8;
    v5 = *((_QWORD *)this + 13);
    if ( v8 )
    {
      v6 = v8 - 1;
      if ( v8 - 1 > v5 )
        v6 = *((_QWORD *)this + 13);
      v5 -= v6;
    }
  }
  else
  {
    v5 = *((_QWORD *)this + 13);
    v6 = 0;
  }
  memcpy((void *)(*((_QWORD *)this + 12) + v5), src, v6);
  TEditor::setBufLen(this, v6);
  if ( v9 )
    qfree();
  return v10 - __readfsqword(0x28u);
}

