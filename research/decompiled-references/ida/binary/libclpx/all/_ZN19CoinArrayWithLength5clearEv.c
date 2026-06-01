void *__fastcall CoinArrayWithLength::clear(void **this)
{
  return memset(*this, 0, *((int *)this + 2));
}

